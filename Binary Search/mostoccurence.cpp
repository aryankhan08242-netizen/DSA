#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,5,8,8};
    int n=10;
    int x=8;
    int low=0; 
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            
            if(arr[mid-1]==x){
                high=mid-1;
            }
      else{
        cout<<"First Occurance = "<<mid;
        break;
      }
    }
        else if(arr[mid]>x){
            low=mid+1;
        }
        if(arr[mid]<x){
            high=mid-1;
        }
    }
    // cout<<"Last Occurance = "<<ans;
}