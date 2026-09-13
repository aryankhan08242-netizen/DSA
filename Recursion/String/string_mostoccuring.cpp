#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"Enter the value of n";
    cin>>n;
    string str[n];
    for(int i=0;i<n; i++){
        cin>>str[i];
    }
    for(int i=0;i<n; i++){
        cout<<str[i];
    }
   sort(str[n].begin(),str[n].end());
   for(int i=0;i<n;i++){
    for(int j=i+1; j<n-1;j++){
        if(str[i]==str[j]){
            count++;
        }
    }
   }
   cout<<count;


}