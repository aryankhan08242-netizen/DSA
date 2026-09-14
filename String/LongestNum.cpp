#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>v;
    v.push_back("flight");
    v.push_back("flower");
    v.push_back("flow");
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0; i<n;i++){
        cout<<v[i]<<endl;
    }
    string first=v[0];
    string last=v[n-1];
    string s="";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            s+=first[i];
        }
        else{
            break;
        }
        
    }
     cout<<s;
     return 0;




}