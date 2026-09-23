#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[9]={1,2,3,5,9,11,15,16,19};
int n=9; 
int x=10;
//Lower Bound Check
for(int i=0; i<n; i++){
    if(arr[i]>x){
        cout<<"Lower Bound"<<arr[i-1];
        break;
    }
}
cout<<endl;
//Upper Bound Check
for(int i=0; i<n; i++){
    if(x<arr[i]){
        cout<<"Upper Bound"<<arr[i];
        break;
    }
}


}