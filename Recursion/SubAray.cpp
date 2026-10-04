#include<iostream>
using namespace std;
void CountDigi(int dig, int count){
if(dig==0){
    cout<<count;
    return;
}
CountDigi(dig/10,count+1);
}
int main(){
    int digit;
    cout<<"Enter the Digit:";
    cin>>digit;
    int count=0;
    CountDigi(digit,count);
}