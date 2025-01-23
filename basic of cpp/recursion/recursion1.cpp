// #include <iostream>
// using namespace std;

// void y(int n) {
//     if (n < 1) {
//         return;
//     }
//     //cout << n << " ";
//     y(n - 1);
//     cout << n << " ";
// } 

// int main() {
//     int n;
//     cin >> n;
//     y(n);

//     return 0;
// }




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
