#include<iostream>
using namespace std;
void thesis(string s, int open, int close, int n){
    if(close==n){
        cout<<s;
         return;
    }
   
  if(open<n) return thesis(s+"(",open+1, close,n);
  if(open<close) return thesis(s+")",open, close+1,n);
}
int main(){
    int n=3;
    thesis("",0,0,n);
}