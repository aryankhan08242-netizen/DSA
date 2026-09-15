#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="look";
    string t="took";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int count1=0;
    int count2=0;
    for(int i=0; i<s.size();i++){
      for(int j=i+1; j<s.size();j++){
        if(s[i]=s[j]){
            count1++;
        }
      }
}
    for(int i=0; i<t.size();i++){
      for(int j=i+1; j<t.size();j++){
        if(t[i]=t[j]){
            count2++;
        }
      }
}
if(count1==count2){
    cout<<"isomorphic";
}
else
cout<<"Not isomorphic";
}