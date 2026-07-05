#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Largest Number in array = "<<max<<endl;
    int SecondLargest=arr[0];
    for(int i=1;i<n-1;i++){
        if(SecondLargest<arr[i] && arr[i]!=max){
            SecondLargest=arr[i];

        }
    }
    cout<<"Second Largest Number in Array"<<SecondLargest;
}