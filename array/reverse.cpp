#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
int start = 0;
int end = n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    printArray(arr,n);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array in place
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Printing the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/