#include<bits/stdc++.h>
using namespace std;

int sum(int num[],int n){
    int sam = 0;
    for(int i =0;i<n;i++){
        sam+=num[i];
    }
    return sam;
}

int main(){
    int n ;
    cin>>n;
    int num[n];
    for(int i = 0;i<n;i++){
        cin>>num[i];
    }
    cout<<"sum of array"<<sum(num,n);
    for(int i = 0 ;i<n;i++){
        cout<<num[i];
    }
}