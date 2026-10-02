#include<iostream>
using namespace std;
int maiz(int row, int col, string s){
    if(row<1 || col<1){
        return 0;
    }
    if(row==1 && col==1){
cout<<s<<endl;
        return 1;
    }
    int right=maiz(row,col-1,s+"R");
    int down=maiz(row-1,col,s+"D");
    return right+down;
}
int main(){
    
    cout<<maiz(4,4,"");
}