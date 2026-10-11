#include<iostream>
using namespace std;
int main(){
int arr1[]={1,3,4,5,6};
int arr2[]={8,9,12,13};

int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
int n= sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
int arr3[n];
int i=0; int j=0; int k=0; 
while(k<n){
   if(arr1[i]<arr2[j]){
    arr3[k]=arr1[i];
    k++;
    i++;
   }
   else if(arr1[i]>arr2[j]){
    arr3[k]=arr2[j];
    k++;
    j++;
   }
    else if(i>=n1){
arr3[k]=arr2[j];
k++;j++;
   }
   else{
    arr3[k]=arr1[i];
    i++;k++;
   }
}
for(int i=0 ;i<n; i++){
    cout<<arr3[i]<<" ";
}
}