#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int mid  = (start+end)/2;
    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
           start =  mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    // int index = 
    cout<<binarySearch(arr,n,key);
   // cout<<"index is"<<index<<endl;
}