#include<iostream>
#include<vector>
using namespace std;
void printSub(int arr[], vector<int>v, int n,int indx){
if(indx==n){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
    printSub(arr,v,n,indx+1);
    v.push_back(arr[indx]);
    printSub(arr,v,n,indx+1);
    

}
int main(){
    vector<int>v;
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printSub(arr,v,n,0);

}