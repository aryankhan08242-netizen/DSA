#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>a){
int no0=0;
int no1=0;
for(int i=0;i<a.size();i++){
    if(a[i]==0){
        no0++;
    }
    else{
        no1++;
    }
}
for(int i=0;i<a.size();i++){
    if(i<no0){
        a[i]=0;
    }
    else{
        a[i]=1;
    }
}
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    sort01(v);
}