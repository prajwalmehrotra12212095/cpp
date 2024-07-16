#include<bits/stdc++.h>
using namespace std;
int cou = 0;
void fun(){
    if(cou==3)
    return;
    cout<<cou<<endl;
    cou++;
    fun();
}
int main(){
    
    fun();
    return 0;
}