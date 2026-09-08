#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="anwar";
    string t="alam";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
     cout<<"True";

    }
    else 
    cout<<"false";
}
