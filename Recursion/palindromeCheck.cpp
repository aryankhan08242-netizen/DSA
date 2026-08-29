#include<iostream>
#include<string>
using namespace std;
void checkingPalindrome(int i, string str[],int n){
    if(i>=n/2){
        return;
    }
    
    checkingPalindrome(i+1,str,n);
}
int main(){
    int n;
    cout<<"Enter the string";
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    checkingPalindrome(0,str,n);
string str2[n];
string temp[n];
for(int i=0;i<n;i++){
    temp[i]=str[i];
    str2[i]=temp[i];

}
if(str==str2){
    cout<<"Palindrome";

}
else{
    cout<<"Not palindrome";
}

}