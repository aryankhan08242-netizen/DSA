#include<iostream>
#include<climits>
#include<algorithm>
using namespace std; 
int main(){
    int arr[5]={19,12,23,18,16};
    int n=5;
   int x=0;
    for(int i=0; i<n; i++){
        int min=INT_MAX;
        int mindx=-1;
        
    for(int j=0; j<n; j++){
        if(arr[j]<=0){
            continue;
        }
        else{
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
    } 
    arr[mindx]=-x;
    x++;
}
for( int i=0; i<n; i++){
    arr[i]=-arr[i];
        cout<<arr[i]<<" ";
    }
}