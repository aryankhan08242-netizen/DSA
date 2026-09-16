#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    vector<int>v;
    int n=nums.size();
    int noz=0;
    for(int i=0; i<n; i++){
        if(nums[i]==0) noz++;
        else v.push_back(nums[i]); 
    }
    for(int i=0; i<noz; i++){
        v.push_back(0);
    }
    for(int i=0; i<n; i++){
        nums[i]=v[i];
    }
}