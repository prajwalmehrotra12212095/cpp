#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
unordered_map<int,int>mapp;
int maxFreq = 0;
int maxAns = 0;
for(int i =0;i<n;i++){
    mapp[arr[i]]++; 
    maxFreq = max(maxFreq,mapp[arr[i]]);
}
for(int i =0;i<<n;i++){
    if(maxFreq==mapp[arr[i]]){
        maxAns = arr[i];
        break;
    }
}
return maxAns;
}