
//& this take the adress and it change the value according to the function
#include<bits/stdc++.h>
using namespace std;

void pass(int &i){
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
/