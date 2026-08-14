#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="How Anwar got a intern ship at second year , i am very surprise!";
    
stringstream ss(str);
string word;
vector<string>newstr;
while(ss>>word){
   newstr.push_back(word);
}
int len=newstr.size();
for(int i=0; i<len;i++){
    cout<<newstr[i];
    cout<<endl;
}
cout<<endl;
sort(newstr.begin(),newstr.end());

for(int i=0; i<len;i++){
    cout<<newstr[i];
    cout<<endl;
}

 

}
