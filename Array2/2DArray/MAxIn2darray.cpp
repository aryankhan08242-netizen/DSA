#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter the Element Of Array";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
       
    }
    
    int Max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(Max<arr[i][j]){
                Max=arr[i][j];
            }
        }
    }
    cout<<"Maximum element in Array is :"<<Max;
}