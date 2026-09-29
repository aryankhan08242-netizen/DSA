#include<iostream>
using namespace std;
int factorial(int x){
    if(x<=1){
        return 1;
    }
    int fact=1;
    for(int i=1; i<=x; i++){
   fact*=i;
   cout<<fact<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
   cout<< factorial(n);
}