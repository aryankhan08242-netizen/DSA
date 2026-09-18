#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[8]={1,2,3,5,0,0,5,7};
    for(int i=0; i<8; i++){
        for(int j=0; j<7-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
            else j++;
        }
    }
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

}