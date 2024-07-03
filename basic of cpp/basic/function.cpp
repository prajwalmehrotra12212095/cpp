#include<bits/stdc++.h>
using namespace std;
// void printName(string name2){
//     cout<<"hey"<<name2<<endl;
// }

// int main(){
//     string name;
//     cin>>name;
// printName(name);
// string name2;
// cin>>name2;
// printName(name2);
// return 0;
// }

// void sum(int num3){
// cout<<num3;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int num3 = num1+num2;
//     sum(num3);
//     return 0;
// }

// int sum(int num1,int num2){
// int num3 = num1+num2;
// return num3;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int res = sum(num1,num2);
//     cout<<res;
//     return 0;
// }

int maxx(int num1,int num2){
    if(num1>=num2) return num1;
    else return num2;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
int minimum = maxx(num1,num2);
cout<<minimum<<endl;
return 0;

}