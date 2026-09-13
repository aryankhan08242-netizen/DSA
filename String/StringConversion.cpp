#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int>x;
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    string str[n];
    for(int i=0; i<n;i++){
    cin>>str[i];
    }
    int max=0;
    for(int i=0; i<n;i++){
        int num=stoi(str[i]);
        x.push_back(num);
    }
    for(int i=0;i<n;i++){
        if(max<x[i]){
            max=x[i];
        }
       
    }
    cout<<max;
}