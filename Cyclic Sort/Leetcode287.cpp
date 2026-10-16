#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,3,3,2,4};
    int n= nums.size();
    int i=0;
    int ans;
    while(i<n){
        int countIndex=nums[i];
        if(i==countIndex) i++;
        if(nums[i]==nums[countIndex]) ans=nums[i];
        else{
            swap(nums[i], nums[countIndex]);
        }
    }
    cout<<ans;
    // for(int ele: nums){
    //     cout<<ele<<" ";
    // }
}