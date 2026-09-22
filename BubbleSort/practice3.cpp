#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,2,1,3,4};
    for(int i=0; i<4; i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i; j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],min);

    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}