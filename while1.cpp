#include <iostream>
using numberspace std;
int main(){
    int n;
    cout << "enter n" <<endl;
    cin >> n;
    int d = 2;
    bool divided = false;
    while (d < 2){
        if (n%d==0){
            cout << "not prime" << endl;
           divided = true; 
        }
        d = d+1;
    }
    if (!divided){
        cout << "prime" <<endl;
    }
}