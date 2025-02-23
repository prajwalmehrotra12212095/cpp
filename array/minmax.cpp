#include<bits/stdc++.h>
using namespace std;

int getMin(int num[],int n){
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        mini = min(mini,num[i]);
        // if(num[i]<min){
        //     min = num[i];
        // }
    }
    return mini;
}

int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){

        maxi = max(maxi,num[i]);

        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return maxi;
}

int main(){
    int n ;
    cin>>n;
    int num[n];
    for(int i = 0;i<n;i++){
        cin>>num[i];
    }
    cout<<"max"<<getMax(num,n)<<endl;
    cout<<"min"<<getMin(num,n)<<endl;
    for(int i = 0 ;i<n;i++){
        cout<<num[i];
    }
}