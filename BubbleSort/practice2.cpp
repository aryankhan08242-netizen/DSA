#include<iostream>
#include<algorithm>
#include<climits>
using namespace std; int main(){
    int arr[7]={9, 4, 7, 2, 8, 1, 5};
    // sort index 2 to 5
    for(int i=2; i<6; i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i; j<6;j++){
           if(arr[j]<min){
             min=arr[j];
            mindex=j;
           }

        }
        swap(arr[i],arr[mindex]);

    }
    for(int i=0; i<7;i++){
        cout<<arr[i]<<" ";
    }
}