#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count=0;
    string str="anwar is great ";
    int l=str.length();
while(l>=0 && str[l]==0){
    l--;
     
}
while(l>=0 && str[l]!=' '){
    count++;
    l--;
}
cout<<count;
}