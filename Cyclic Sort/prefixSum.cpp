#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n;i++){
        arr[i]+=arr[i-1]; 
    }
    int indx=-1;
    for(int i=1; i<n; i++){
      if(2*arr[i]==arr[n-1]){
        indx=i;
        break;
      }
    }
    if(indx!=-1){
        cout<<"Array can be divide at "<<indx;
    }
    else{
        cout<<"We can't divide array";
    }
}