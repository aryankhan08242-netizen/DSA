#include<iostream>
using namespace std;
void print(int i,int x){
    
    if(i>x){
        return;
    }
    cout<<i<<endl;
    print(++i,x);
    
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    print(1,n);
}