// uisng sort technique

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - 1] << endl;

    return 0;
}


// using another mehtod

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize `largest` with the first element of the array
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}
