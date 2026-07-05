#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
   int max=arr[0];
   for(int i=1;i<n-1;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    
   }
   cout<<"Your Maximum number = "<<max;
}