#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,8,11,13,14,22};
int n=9; 
int x=12;
int lo=0; int hi=n-1;
while(lo<=hi){
    int mid=(lo+hi)/2;
    if(arr[mid]==x){
        cout<<arr[mid];
    }
    else if(arr[mid]<x){
        lo=mid+1;
    }
    else if(arr[mid]>x){
        hi=mid-1;
    }
    
}
cout<<"Lower Bound"<<arr[hi];
cout<<endl;
cout<<"Upper Bound"<<arr[lo];
return 0;
}