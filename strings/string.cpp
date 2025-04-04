#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "hey hello";
    string str1 = "prajwal";
    string str2 = str+str1;  //concatenation
    cout<<str2<<endl;
    cout<<str.length()<<endl;
    getline(cin,str);  //take for input


    //loops

    for(int i = 0 ;i<str.length();i++){
        cout<<str[i]<<" " <<endl;
    }
    //secomd option

    for(char ch : str){
        cout<<ch<<" "<<endl; 
    }

}