#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","00182","940"};
    int max=stoi(arr[0]);
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        int n=stoi(arr[i]);
        if(max<n){
            max=i;
        }
    }
    cout<<"Maximum Element is at = "<<max;


}