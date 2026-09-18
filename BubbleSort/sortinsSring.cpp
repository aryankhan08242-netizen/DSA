#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str = "PQRXZYMXZXXXX";
  
    int n = str.length();
    string s;
    for(int i=0 ; i<n; i++){
        if(s[i]>='X'){
            s.push_back(str[i]);
        }
    }
    bool flag=true;
    for(int i =0; i<n; i++){
        for (int j=0; j<n-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    
   cout<<s;
}