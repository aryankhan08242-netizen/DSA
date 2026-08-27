#include<iostream>
using namespace std;
void back(int i, int n){
if(i>n){
    return;
}
back(i+1,n);
cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    back(1,n);

}