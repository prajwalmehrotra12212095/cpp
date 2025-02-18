#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int>q;
    priority_queue<int,vector<int>,greater<int>>q;
     q.push(5);
     q.push(3);
     q.push(10);
     while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
     }
     cout<<endl;
     return 0;
}
