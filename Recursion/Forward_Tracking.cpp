#include<iostream>
using namespace std;
void forward(int i, int n){
if(i<1){
    return;
}
forward(i-1,n);
cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    forward(n,n);

}