#include<bits/stdc++.h>
using namespace std;
int main(){
//create
unordered_map<string,int>m;
//insert
pair<string,int> pair2("prajwal",1);
m.insert(pair2);
//insert 2nd way
pair<string,int>p= make_pair("kkkk",2);
m.insert(p);
//insert 3rd way
m["mera"] = 3;

//search
cout<<m["mera"]<<endl;
cout<<m.at("prajwal")<<endl;

//size
cout<<m.size()<<endl;

//count 
cout<<m.count("kkkk")<<endl;

//erase
cout<<m.erase("prajwal")<<endl;

// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;

//iterator 

unordered_map<string,int> :: iterator it = m.begin();
while(it !=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}
}