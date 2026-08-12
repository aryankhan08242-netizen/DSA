#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="anwar";
string t="waran";
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t){
    cout<<"True";
}
else
cout<<"false";
}
