#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec = {1,2,3,4,4};
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.emplace_back(6);
    // vec.pop_back();
    // for(int val: vec){
    //     cout<<val<<endl;
    // }
    // cout<<endl;
    // cout<<vec[2]<< "is same as" << vec.at(2);
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // return 0;
    
    //forward
    vector<int>::iterator it;
    for(it = vec.begin();it!=vec.end();it++){
        cout<< *(it)<<endl;
    }

    //backward 

    for(auto it = vec.rbegin();it!=vec.rend();it++){
        cout<< *(it)<<endl;
    }
}
