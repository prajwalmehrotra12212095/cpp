#include <iostream>
#include <set>
using namespace std;

// Function to find the union of two sorted arrays
void findUnion(int arr1[], int arr2[], int n, int m) {
    set<int> unionSet;

    // Insert elements from both arrays into the set
    for (int i = 0; i < n; i++) {
        unionSet.insert(arr1[i]);
    }
    for (int j = 0; j < m; j++) {
        unionSet.insert(arr2[j]);
    }

    // Display the union of the arrays
    cout << "Union of the arrays: ";
    for (auto it : unionSet) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, arr2, n, m);

    return 0;
}
