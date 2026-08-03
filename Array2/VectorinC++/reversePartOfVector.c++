#include<iostream>
#include<vector>
using namespace std;
void reverse(int i, int j,vector<int>&a){
    // int i=0;
    // int j=a.size()-1;
    while(i<=j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
        
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int k=3;
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    // reverse(0,v.size()-1,v);
    // cout<<endl;
    reverse(0,v.size()-k,v);
    cout<<endl;
    reverse(v.size()-k+1,v.size()-1,v);
    cout<<endl;
    reverse(0,v.size()-1,v);
    cout<<endl;
    

}