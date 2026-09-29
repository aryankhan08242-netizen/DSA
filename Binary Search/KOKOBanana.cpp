#include<iostream>
#include<algorithm>
int Max(int a, int b){
    if(a>b) return a;
    else b;
}
using namespace std;
int main(){
    int arr[5]={30,11,23,4,20};
    int n=5;
    int max=-1; 
    int hours=5;
    int final=0;
    for(int i=0; i<n; i++){
        max=Max(max,arr[i]);

    }
    int low=1; int high=max;
    while(low<=high){
        int mid=low+ (high-low)/2;
        int ans=(int)(max/mid)+1;
        if(ans<=hours){
            final=mid;
            high=mid-1;
        }
        else
        low=mid+1;

    }
    cout<<"The minimum Hours require to eat Banana :"<<final;
}