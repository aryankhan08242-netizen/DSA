#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(2);
    cout<<v[0];
    v.pop_back();
    cout<<v[3];
}
