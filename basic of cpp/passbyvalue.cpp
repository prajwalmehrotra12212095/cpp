
//it copied the value from main
#include<bits/stdc++.h>
using namespace std;

void pass(int i){
    cout<<i<<endl;
    i+=5;
    cout<<i<<endl;
}
int main(){
    int i = 10;
    pass(i);
    cout<<i<<endl;
    return 0;
}