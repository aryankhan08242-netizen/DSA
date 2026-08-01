#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5,8);
    for(int i=0; i<v.size(); i++){
        cin>>v.at(i);
    }
    cout<<endl;
    int x;
    cout<<"Enter the you want to search"<<endl;
    cin>>x;
    int values;
    for(int i=0;i<v.size();i++){
        if(x==v.at(i)){
            values=i;
        }
    }
    cout<<"The last time value is at "<<values;
}