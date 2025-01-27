#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i =s+1;i<=e;i++){
if(arr[i]<=pivot){
    cnt++;
}
    }

    //place pivot at right position

    int pivotIndex  = s +cnt;
    swap(arr[pivotIndex],arr[s]);

    //left right wala 

    int i = s, int j = e;
    while(i<pivotIndex && j> pivotIndex){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}

void qs(int arr[],int s,int e){
 
 //base case
 if(s>=e)
 return;

 // partion

 int p  = partition(arr,s,e);


 //left part sort
qs(arr,s,p-1);

 //right part sort
 qs(arr,p+1,e);
  
}
int main(){
    int arr[5] ={1,4,6,3,5};
    int n = 5;
    qs(arr,0,n-1);
    for(int i  = 0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}