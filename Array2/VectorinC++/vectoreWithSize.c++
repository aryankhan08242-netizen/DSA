#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v(5,6);
    for(int i=0; i<v.size(); i++){
        cin>>v.at(i);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}