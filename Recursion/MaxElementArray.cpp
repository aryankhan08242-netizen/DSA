#include<iostream>
#include<climits>
using namespace std;
void MaxEl(int arr[], int n, int indx,int max){
    if(indx==n) {
        cout<<max;
    return;
}
    if(max<arr[indx]){
        max=arr[indx];
    }

    MaxEl(arr,n,indx+1, max);
   
}

int main(){
    int arr[]={1,2,5,6,8,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    MaxEl(arr,n,0,INT_MIN);
}