#include<iostream>
using namespace std;
int zig_zag(int n){
    if(n==0){
        return 0;
    }
    cout<<n;
    zig_zag(n-1);
    cout<<n;
    zig_zag(n-1);
    cout<<n;
}
int main(){
    zig_zag(4);
}