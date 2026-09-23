#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,2,2,2,3,3,3,5,5};
    int x=2;
    int lo=0; int n=9;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi=mid-1;
            }
            else 
            {cout<<"The first occurence is at"<<mid;
            break;}
        }
        if(arr[mid]<x){
            lo=mid+1;
        }
        if(arr[mid]>x){
            hi=mid-1;
        }
    }

}