#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Anwar is a great boy . He is also a best Student ";
    stringstream ss(str);
    string temp;
    vector<string>v;

    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int count=1;
    int MaxCount=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
            MaxCount=count;
        }
        else{
            count=1;
        }
    }
        for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
            MaxCount=count;
        }
        
        else
        count=1;
        if(MaxCount==count){
            cout<<MaxCount <<" "<<v[i]<<endl;
    }
    


    }
}