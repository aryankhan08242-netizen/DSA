#include<iostream>
using namespace std;
int main(){
    int arr[5]={30,11,23,4,20};
    int n=5;
    int sum=0; 
    int hours=5;
    int final=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];

    }
    int low=1; int high=sum;
    while(low<=high){
        int mid=low+ (high-low)/2;
        int ans=(int)(sum/mid)+1;
        if(ans<=hours){
            final=mid;
            high=mid-1;
        }
        else
        low=mid+1;

    }
    cout<<"The minimum Hours require to eat Banana :"<<final;
}