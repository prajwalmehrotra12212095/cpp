#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
cout<<s.size();
for(auto value:s){
    cout<<value<<" ";
}
cout<<endl;
}
