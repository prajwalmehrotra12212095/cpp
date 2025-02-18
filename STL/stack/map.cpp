#include<bits/stdc++.h>
using namespace std;
int main(){
// map<string,int>m;
// m["tv"] = 100;
// m["bulb"] = 50;
// m["geadohone"] = 200;
multimap<string,int>m;
// m.emplace("tv",100);
// m.emplace("tv",100);
// m.emplace("tv",100);
// m.emplace("tv",100);
// m.erase(m.find("tv"));
unordered_map<string,int>m;
m.emplace("tv",100);
m.emplace("lapto",100);
m.emplace("ghy",100);
m.emplace("hr",100);
m.erase(m.find("tv"));
for(auto p: m){
    cout<<p.first<<" "<<p.second<<endl;
}
// if(m.find("tv") !=m.end()){
//     cout<<"founf"<<endl;
// }
// else{
//     cout<<"not found"<<endl;
// }
}
