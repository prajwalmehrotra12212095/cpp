#include <iostream>
#include <climits>
using namespace std;
void printArray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
void increnment(int a,int b[],int n){
    a++;
    b[0]++;
}
void reverse(int input[],int n){
    int i=0, j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++
        j-- 
    }
}
int main (){
    int a=10;
    int b[10]={1,2,3,4,5};
    reverse(b,5);
    printArray(b,5);
    increnment(a,b,10);
    cout<<"a : "<<a<<endl;
    cout<<"b[0] : "<<b<<endl; 
    //int input[100]={1,2,3};
    /*
    //take array input from user
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>input[i];
    }*/
   // printArray(b,100);
}