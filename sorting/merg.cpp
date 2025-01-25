#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves of the array
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // Temporary array to store merged elements
    int left = low;    // Starting index of the left subarray
    int right = mid + 1; // Starting index of the right subarray

    // Merge elements from both halves in sorted order
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Add remaining elements from the left subarray
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Add remaining elements from the right subarray
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive function for merge sort
void mS(vector<int> &arr, int low, int high) {
    if (low >= high) return; // Base case: single element or invalid range

    int mid = (low + high) / 2; // Find the middle point
    mS(arr, low, mid);          // Recursively sort the left half
    mS(arr, mid + 1, high);     // Recursively sort the right half
    merge(arr, low, mid, high); // Merge the two sorted halves
}

// Wrapper function for merge sort
void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

// Main function to demonstrate merge sort
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    mergeSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
