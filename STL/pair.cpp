#include<bits/stdc++.h>
using namespace std;
int main(){
//  pair<int,int>p = {1,2};
//  pair<int, pair<char,int>>q = {1, {'a',1}};
vector<pair<int,int>>vec = {{1,2},{5,6},{3,4}};
//  cout<<q.first<<endl;
//  cout<<q.second.first<<endl;
vec.push_back({4,5});
 for(auto p :vec){
    cout<<p.first<<p.second<<endl;
 }
//  cout<<p.first<<p.second;  

}
