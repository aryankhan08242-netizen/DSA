#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={3,0,1};
    int n=nums.size()+1;
  
    for(int i=0; i<n-1;i++){
        if(nums[i]==0){
            swap(nums[0],nums[i]);
        }
    } 
   
    int i=0;
    while(i<n-1){
    int countindx=nums[i]-1;
    if(i==countindx ) i++;
    else if( countindx==-1){
        i++;
    }
    else{
        swap(nums[i],nums[countindx]);
    }

    }
    for(int i=0;i<n-1;i++){
        cout<<nums[i]<<" ";
    }
    int ans;
    for(int i=0;i<n-1; i++){
        if(nums[i]==0){
            ans=i+1;
        }
    }
    cout<<endl;
    cout<<ans;
}