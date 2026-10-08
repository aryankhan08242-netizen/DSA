#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int n;
 cout<<"Enter the number of Element in array";
 cin>>n;
 int arr[n];
 for(int i=0; i<n;i++){
    cin>>arr[i];
 }
    int k;
    cout<<"Enter the number u want to print reverse";
    cin>>k;
    vector<int>v;
    for(int i=0; i<k; i++){
        v.push_back(arr[i]);
    }
    reverse(v.begin(),v.end());
   
    cout<<endl;
    for(int i=k; i<n; i++){
        v.push_back(arr[i]);
    }
   
    for(int i=0; i<k; i++){
       arr[i]=v[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}