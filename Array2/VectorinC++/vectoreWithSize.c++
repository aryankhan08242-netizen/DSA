#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void change(vector<int>&a){
    a[0]=100;
}
int main(){
    vector<int>v(5,6);
    for(int i=0;i<v.size();i++){
        cin>>v.at(i);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i);
    }
    cout<<endl;
    change(v);
       for(int i=0; i<v.size(); i++){
        cout<<v.at(i);
    }

    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
}