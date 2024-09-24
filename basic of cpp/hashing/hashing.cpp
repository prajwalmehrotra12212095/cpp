#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input size of the array
    int arr[n]; // Array of size 'n'

    // Taking input for the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute hash table (let's assume we are making a simple hash)
    int hash[13] = {0}; // Assuming hash table size 13

    for (int i = 0; i < n; i++) {
        hash[arr[i] ]++;  // Store counts or map indices in hash 
    }

    int q;
    cin >> q;  // Input number of queries
    while (q--) {
        int number;
        cin >> number;  // Input the number to be queried

        // Fetch and display the hash value
        cout << hash[number] << endl;  // Output the hash value for this number 
    }

    return 0;
}