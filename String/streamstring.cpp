#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
string s="I am A great and intelligant Boy";
stringstream ss(s);
string temp;
while(ss>>temp){
    cout<<temp<<" "<<endl;

}
return 0;
}