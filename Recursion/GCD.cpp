#include<iostream>
using namespace std;
int HCF(int a, int b){
    if(a==0){
        return b;
    }
    else return HCF(b%a,b);
}
int main(){
    int a=4,b=12;
    HCF(a,b);
}