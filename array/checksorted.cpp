#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = true;

    for (int i = 0; i < n - 1; i++) { 
        if (arr[i] > arr[i + 1]) { 
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

