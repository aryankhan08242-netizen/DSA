#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter the number of element in array=";
    cin>>n;
    int arr[n];
   cout<<"ENter the Elements";
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Total sum of all elements ="<<sum;
}