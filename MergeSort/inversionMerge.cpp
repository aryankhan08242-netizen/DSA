#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>a,vector<int>b){
    int count=0;
    int i=0; int j=0;
    int n1=a.size();
    int n2=b.size();
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b, vector<int>&ans){
    int i=0; int j=0; int k=0;
    int n1=a.size();
    int n2=b.size();
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            ans[k]=a[i];
            k++;
            i++;
        }
        else {
            ans[k]=b[j];
            k++;
            j++;
        }
    }
        while(i<n1){
            ans[k]=a[i];
            i++;
            k++;
        }
        while(j<n2){
            ans[k]=b[j];
            j++;
            k++;
        }

    
}
int mergeSort(vector<int> &ans){
    int count=0;
int n=ans.size();
if(n==1){
      return 0;
    }
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0; i<n1; i++){
        a[i]=ans[i];
    }
    for(int i=0; i<n2; i++){
        b[i]=ans[i+n1];
    }
    count+=mergeSort(a);
    count+=mergeSort(b);
    count+=inversion(a,b);
    merge(a,b,ans);
    return count;
}
int main(){
    vector<int>ans={2,3,5,9,8};
 
    int n=ans.size();
    for(int i=0; i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<mergeSort(ans);
    


}