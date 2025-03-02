#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
for(int i =0;i<size;i++){
    if(arr[i] == key){
        return 1;
    }
}
return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the elemnt"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is there"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}