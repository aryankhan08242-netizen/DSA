#include<iostream>
using namespace std;
void number(int x){
    if(x==0){
        return;
    }
    cout<<x<<endl;
    number(x-1);
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    number(n);
}