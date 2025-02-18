#include<bits/stdc++.h>
using namespace std;
int main(){
// int arr[5] = {5,3,4,1,2};
// sort(arr,arr+5);
// for(auto val:arr){
//     cout<<val<<" ";
// }

// vector<int>vec= {3,4,6,7,8};
// //using the grrster to print in descindng order
// sort(vec.begin(),vec.end(),greater<int>());  
// for(auto val:vec){
//     cout<<val<<" ";
// }

vector<pair<int,int>>pa={{1,2},{3,4},{5,6}};
sort(pa.begin(),pa.end());
for(auto val:pa){
    cout<<val.first<<" "<<val.second<<endl;;
}
cout<<endl;
}
