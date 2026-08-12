#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number :";
    cin>>n;
    int digit=0;
    while(n!=0){
        n=n/10;
        digit++;
    }
    cout<<"Nu,ber of ditit "<<digit;


