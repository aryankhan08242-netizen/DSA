#include<iostream>
#include<vector>
using namespace std;
// void display(int arr[],int n,int indx){
//     if(indx==n){
//      return;
//     }
//     cout<<arr[indx]<<" ";
//     display(arr,n,indx+1);
// }
void display2(vector<int>&v, int n,int indx){
    if(indx==n){
        return;
    }
    cout<<v[indx]<<" ";
    display2(v,n,indx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    // // display(arr,n,0);
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    int s=v.size();
    display2(v, s,0);
    // display2(v,s,0);
}