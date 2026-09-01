#include<iostream>
#include<vector>
using namespace std;
int subsequence(int i, vector<int>&arr, int n){
    if(i>=n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return ;
    }
    arr.push_back(arr[i]);
    subsequence(i++,arr[i]);
    arr.pop_back(arr[i]);


}
int main(){
vector<int>arr={3,1,2};
int n=3;
subsequence(0,arr,n);

}