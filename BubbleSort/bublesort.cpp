#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={5,3,1,4,2,6};
    int n=6;
   
    for(int i=0; i<n; i++){
        int flag=true;
         for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
            }
            
         }
         if(flag==true){
                break;
            }
    }
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}