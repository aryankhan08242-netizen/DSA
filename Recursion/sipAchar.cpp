#include<iostream>
using namespace std;
void skipAChar(string ans, string given,int indx){
if(indx==given.length()){
    cout<<ans;
    return;
}
if(given[indx]!='a'){
ans.push_back(given[indx]);
}
skipAChar(ans,given,indx+1);
}
int main(){
    string str="aaalaaam";
    skipAChar("",str,0);
}