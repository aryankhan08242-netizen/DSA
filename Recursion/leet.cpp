#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,3,4};
    int count=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>=arr[j]){
                count++;
            }
            if(count==arr[i]){
                cout<<count;
            }
            else cout<<-1;
            
        }
    }
}