#include<iostream>
using namespace std;
int getmax(int Arr[],int size){
    int max= Arr[0];
    for(int i=0; i<size;i++){
        if(max<Arr[i]){
            max=Arr[i];
        }
    }
    return max;
}
int getmin(int Arr[],int size){
    int min= Arr[0];
    for(int i=0; i<size;i++){
        if(min>Arr[i]){
            min=Arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"As I see in ur array maximum number is :"<<getmax(arr,n)<<endl;
    cout<<"As I see in ur array minimum number is :"<<getmin(arr,n)<<endl;
}