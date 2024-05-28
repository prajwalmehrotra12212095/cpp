#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        for(int space =1;space<=n-i+1;space++){
              cout<< "*";
    }
    cout<<endl;
    }
}