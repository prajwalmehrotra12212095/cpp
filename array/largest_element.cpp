#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
    cin>>arr[i];
    }
    int larger = arr[0];
    for(int i = 1;i<n;i++){
        if(larger<arr[i]){
            larger =arr[i];
        }
    }
     cout<<larger<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
    }
    
