#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int>arr={1,2,3,0,0,0};
    int count=0;
    for(int i=arr.size()-1; i>=0;i--){
        if(arr[i]==0){
            arr.pop_back();
        }
    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i];
    }
    }
