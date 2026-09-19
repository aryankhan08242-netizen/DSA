#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,2,3,1,4};
    int n=5;
    for(int i=1; i<n ;i++){
       int j=i;
       while(j>=1 && arr[j]<arr[j-1]){
          swap(arr[j-1],arr[j]);
          j--;
    }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}