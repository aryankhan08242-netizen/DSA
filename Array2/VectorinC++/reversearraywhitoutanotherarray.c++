#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    int i=0;
    int j=v.size()-1;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    while(i<=j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;i++;
        j--;

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}