#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
    vector<int>ans={4,3,2,7,8,2,3,1};
    int n=ans.size();
    vector<int>v;
    int i=0; 
    while(i<n){
        int currentIndx=ans[i]-1;
        if(ans[currentIndx]==ans[i]|| currentIndx=i) i++;
        else{
            swap(ans[i], ans[currentIndx]);
        }
    }
    for(int i=0; i<n; i++){
        if(ans[i]!=i+1){
        v.push_back(i+1);
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
 }