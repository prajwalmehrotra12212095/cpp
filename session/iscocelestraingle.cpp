#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        for(int space =1;space<=n-i;space++){
        cout<<' ';
    }
    for (int j=1;j<=i;j=j+1){
        cout<< j;
    }
   int j=i-1;
    while(j>=1){
        cout<<j;
        j=j-1;
    }
    cout<<endl;
    }
}
