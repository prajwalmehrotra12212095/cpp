#include <iostream>
using namespace std;
int main(){
    //take array input from user
    int n;
    cin>>n;
    int input[100];
    for (int i = 0;i<n;i++){
    cin>>input[i]; 
    }
    //print array
    for (int i=0;i<n;i++){
    cout<<input[i]<<endl;
    }
//largest element of array
 int max =input[0];
 for (int i =1;i<n;i++){
    if (input[i]>max){
        max=input[i];
    }
 }
 cout<<max<<endl;
}
//for negative max value use INT_MIN and one header file <climits>

//storing array
int main(){
    int n;
    cin>>n;
    int input[100];
    cout<<input<<endl;
}
//pass array and function 
 