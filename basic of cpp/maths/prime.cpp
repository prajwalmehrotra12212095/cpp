#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fac = 0;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            fac++;
            if((n/i) !=i) fac++;
        }
    }
    if(fac ==2) cout<<"true";
    else cout<< "false";
}