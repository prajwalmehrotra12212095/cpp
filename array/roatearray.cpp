#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i =0;i<n;i++){
    cout<<arr[i];
    }
}



//rotating d number times

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Handle cases where d is greater than n
    d = d % n;

    // Rotate the array d times to the left
    // First part: elements from index d to n-1
    // Second part: elements from index 0 to d-1
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place the saved elements at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

