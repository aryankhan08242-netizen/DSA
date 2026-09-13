#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="Anwar is DSA master and he is is also also a a good boy";
    string temp;
    stringstream ss(s);
    vector<string>v;
    while(ss>>temp){
     v.push_back(temp);
    }
   sort(v.begin(),v.end());
   int count=1;
   int maxCount=1;
   for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]){
        count++;
    }
    else count=1;
    maxCount=max(count,maxCount);
   }
   count=1;
   for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]){
        count++;
    }
    else
    count=1;
    if(maxCount==count){
        cout<<maxCount<<" "<<v[i];
    }
   }
}