#include<bits/stdc++.h>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int n ;
    cin>>n;
    int num[n];
    for(int i = 0;i<n;i++){
        cin>>num[i];
    }
    cout<<getMax(num,n);
    for(int i = 0 ;i<n;i++){
        cout<<num[i];
    }
}