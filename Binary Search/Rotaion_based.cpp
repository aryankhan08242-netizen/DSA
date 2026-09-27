#include<iostream>
using namespace std;
int main(){
    int arr[10]={9,8,7,6,0,1,2,3,4,5};
    //piovot is 0
    int n=10;
    int low=0; int high=n-1;
    int target =2;
    int pivot=-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<arr[mid+1]&&arr[mid]<arr[mid-1]){
            pivot=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            pivot=mid+1;
            break;
        }
        else if(arr[mid]<arr[high]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     if(target<arr[pivot-1]&&target>arr[0]){
            int low=0; int high=pivot-1;
            while(low<=high){
                int mid=low + (high-low)/2;
                if(arr[mid]==target){
                    cout<<mid;
                    break;
                }
                else if(arr[mid]>target){
                    high= mid-1;
                }
                else{
                    low=mid+1;
                }
            }

        }
        else{
            int low=pivot;
            int high=n-1;
            while(low<=high){
                int mid= low+ (high-low)/2;
                if(arr[mid]==target){
                    cout<<mid;
                    break;
                }
                else if(arr[mid]>target){
                    high=mid-1;
                }
                else low=mid+1;
            } 

        }
        
        // cout<<pivot;
    
}