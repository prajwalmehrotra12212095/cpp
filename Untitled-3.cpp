#include<iostream>
using namespace std;
int main(){
    int S,E,W;
    cin >> S >> E >> W;
    for(int i = S;i<=E;){
        cout << i << " "<<(i-32)*5/9;
        i = i + W;
        cout << endl;

    }
}