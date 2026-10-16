#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int m=2;
    int n=3;
    vector<vector<int>>v(m,vector<int>(n));
    vector<int>ans;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    
        for(int i=0; i<m;i++){
            int sum=0;
            for(int j=0; j<n; j++){
            sum+=v[i][j];
            
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        int k=ans.size();
       for(int i=0; i<k; i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;
       cout<<ans[k-1];
    }

