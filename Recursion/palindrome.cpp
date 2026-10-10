#include<iostream>
#include<string>
using namespace std;
int checkPalin(string s, int i, int j){
if(i>j) return 1;
if(s[i]!=s[j]) return 1;
else return checkPalin(s,i+1,j-1);
}
int main(){
    string s="racecar";
    checkPalin(s, 0, s.length()-1);

}