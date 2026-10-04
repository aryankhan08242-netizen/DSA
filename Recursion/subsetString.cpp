#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(string target,string given,int indx,vector<string>&v){
    if(indx==given.length()){
        v.push_back(target);
        return;
    }
    
    char c=given[indx];
    subset(target+c,given,indx+1,v);
    subset(target,given,indx+1,v);

}
int main(){
vector<string>v;
    string str="abcd";
    subset("",str,0,v);
    // for(int i=0; i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    for(string ch:v){
        cout<<ch<<endl;
    }
}