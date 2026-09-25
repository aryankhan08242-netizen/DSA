#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element";
    cin>>n;
    int arr[n];
    //suppose array[]={0,0,0,1,2,3,4,6}
    //suppose array[]={1,3,4,0,0,0,5,9,0,0}

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;

        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int noz=0;
   for(int i=0; i<n; i++){
    if(arr[i]==0){
        noz++;
    }
   }
   cout<<noz<<endl;
   vector<int>nums;
   int indx=0;
   for(int i=noz; i<n; i++){
    nums.push_back(arr[i]);
   }

   for(int i=nums.size(); i<nums.size()+noz;i++){
    nums.push_back(0);
   }
   cout<<"Sorted Array";
   for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
   }
    
}