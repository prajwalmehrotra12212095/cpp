//finding the vowle in string usingh cpp
#include<iostream>
#include<string>

using namespace std;
int main(){
    String input;
    cin>>input;
    int count =0;

    for(char c : input){
        c = tolower(c);
        if(c == 'a' || c =='e' || c =='i'||c=='o'||c=='u'){
            count++;
        }
    }
    cout<<"No of vowels: "<<count<<endl;
    return 0;
}
