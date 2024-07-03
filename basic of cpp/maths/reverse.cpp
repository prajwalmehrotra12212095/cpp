#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int rev = 0;
    int dup = n;
    while(n>0){
        int last = n%10;
        rev = (rev*10)+last;
        n = n/10;
    }
if(dup == rev ) cout<< "true";
else cout<< "false";
}