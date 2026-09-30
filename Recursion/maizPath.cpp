#include<iostream>
using namespace std;
int maiz(int sr,int sc,int er,int ec){
    if(sr>er|| sc>ec) return 0;
    if(sr==er && sc==ec){
        return 1;
    }
    int rowStep=maiz(sr+1,sc,er,ec);
int colStep=maiz(sr,sc+1,er,ec);
return rowStep+ colStep;
}
void maizStep(int sr,int sc, int er, int ec, string s){
    if(sr>er|| sc>ec) return;
    if(sr==er && sc==ec){
        cout<<endl;
        cout<<s<<" "<<endl;
        return;
    }
    maizStep(sr+1,sc,er,ec,s+"R");
    maizStep(sr,sc+1,er,ec,s+"D");
}  

int main(){
cout<<maiz(0,0,2,2);
 maizStep(0,0,2,2,"");
}