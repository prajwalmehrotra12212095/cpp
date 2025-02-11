#include <sapi.h>
#include <sphelper.h>
#include <iostream>
#include <windows.h>

using namespace std;

// Function to speak out text
void speak(const wstring &text) {
    ISpVoice *voice = NULL;
    if (FAILED(CoInitialize(NULL))) return;
    if (FAILED(CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&voice))) return;

    voice->Speak(text.c_str(), 0, NULL);
    voice->Release();
    CoUninitialize();
}

// Function to execute commands
void executeCommand(const string &command) {
    if (command == "open google") {
        system("start chrome");
        speak(L"Opening Google");
    } else if (command == "open whatsapp") {
        system("start chrome https://web.whatsapp.com");
        speak(L"Opening WhatsApp");
    } else if (command == "exit") {
        speak(L"Goodbye!");
        exit(0);
    } else {
        speak(L"Command not recognized.");
    }
}

int main() {
    speak(L"Hello! I am your voice assistant. Please speak a command.");

    ISpRecognizer *recognizer = NULL;
    ISpRecoContext *context = NULL;
    ISpRecoGrammar *grammar = NULL;
    ISpRecoResult *result = NULL;
    WCHAR *recognizedText = NULL;

    // Initialize Speech Recognition Engine
    if (FAILED(CoInitialize(NULL))) return 1;
    if (FAILED(CoCreateInstance(CLSID_SpInprocRecognizer, NULL, CLSCTX_ALL, IID_ISpRecognizer, (void **)&recognizer))) return 1;
    if (FAILED(recognizer->CreateRecoContext(&context))) return 1;
    if (FAILED(context->CreateGrammar(1, &grammar))) return 1;
    if (FAILED(grammar->LoadDictation(NULL, SPLO_STATIC))) return 1;
    if (FAILED(grammar->SetDictationState(SPRS_ACTIVE))) return 1;

    while (true) {
        cout << "Listening for command..." << endl;
        if (SUCCEEDED(context->WaitForNotifyEvent(INFINITE))) {
            if (SUCCEEDED(context->GetStatus(NULL, &result))) {
                if (SUCCEEDED(result->GetText(SP_GETWHOLEPHRASE, SP_GETWHOLEPHRASE, FALSE, &recognizedText, NULL))) {
                    wstring ws(recognizedText);
                    string command(ws.begin(), ws.end());
                    cout << "Recognized: " << command << endl;
                    executeCommand(command);
                    CoTaskMemFree(recognizedText);
                }
            }
        }
    }

    // Cleanup
    grammar->Release();
    context->Release();
    recognizer->Release();
    CoUninitialize();

    return 0;
}
