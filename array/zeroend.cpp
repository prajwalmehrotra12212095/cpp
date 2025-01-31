#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0; // Pointer to place non-zero elements

    // Move non-zero elements forward
    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            swap(arr[j], arr[i]);
            i++; // Move non-zero index forward
        }
    }

    // Print the result
    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
