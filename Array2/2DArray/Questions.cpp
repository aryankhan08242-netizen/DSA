#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Roll Number :";
    int arr[1][3];
    for(int i=0; i<3;i++){
     
     cin>>arr[0][i];
    }
    cout<<endl;
    cout<<"Enter Marks :";
    for(int i=0; i<3;i++){
     
     cin>>arr[1][i];
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}