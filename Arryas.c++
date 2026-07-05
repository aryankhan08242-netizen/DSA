#include<iostream>
using namespace std;
int main(){
  int marks[8];
  for(int i=0;i<=7;i++){
    cin>>marks[i];
  }
  for(int i=0;i<8;i++){
    if(marks[i]<=35){
        cout<<i<<" "<<endl;
    }
    
  }
return 0;
}