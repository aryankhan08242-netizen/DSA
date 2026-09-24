#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,1,2,2,2,3,3,5,5};
    int target=3;
    int low=0; int high=9;
    while(low<=high){
        int mid=low+ (high-low)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                low=mid+1;
                 cout<<target<<" "<<"Start from "<< mid-1<<endl;
            }
            else{
                cout<<"End"<<mid<<endl;
                break;
            }
            if(arr[mid-1]==target){
                high=mid-1;
                  cout<<target<<" "<<"End at"<<mid+1<<endl;
            }
            else{
                cout<<"Start"<<mid;
              
            }
        }
        if(arr[mid]<target){
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
    }
}