#include <iostream>
using namespace std;
void fact(int n){
    if(n<1){
        return;
    }
    fact(n-1);
    cout<<n*(n-1)<<
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}
