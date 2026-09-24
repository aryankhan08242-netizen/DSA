#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,23,45,67,87};
    int target;
    cout<<"Enter the target under 100";
    cin>>target;
    int low=0; int high=4;
    while(low<=high){
        int mid=(low+mid)/2;
        if(arr[mid]==target){
            cout<<target;
            break;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else -1;
    }
    cout<<"Lower Bound ="<<high<<endl;
    cout<<"Upper Bound ="<<low;
}