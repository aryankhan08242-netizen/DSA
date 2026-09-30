#include<iostream>
using namespace std;
void sum(int val,int x){
    if(x==0){
        cout<< val;
        return;
    }
    sum(val+x,x-1);
}
int sum2(int n){
if(n==0) return 0;

 return n+sum2(n-1);
}
    

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    // sum(0,n);
    sum2(n);
}