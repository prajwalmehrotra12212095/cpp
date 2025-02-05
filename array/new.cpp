//find the number of repeating elememnt

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Repeating Numbers: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {  // Fixed the comparison operator
                cout << arr[i] << " ";
                break; // To avoid printing the same number multiple times
            }
        }
    }

    cout << "\nNon-Repeating Numbers: ";
    for (int i = 0; i < n; i++) {
        bool isRepeating = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeating = true;
                break;
            }
        }
        if (!isRepeating) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
