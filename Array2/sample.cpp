#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10]={1,0,2,1,2,0,1,0,2,1};
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0; i<10; i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else {
            count3++;
        }
        
        

    }
    cout<<count1<<" "<<count2<<" "<<count3<<" ";
            for(int i=0; i<10; i++){
                if(i>=0 && i<=2){
                    arr[i]=0;
                }
                else if(i>2 && i<7){
                    arr[i]=1;
                }
                else if(i>7 && i<10){
                    arr[i]=2;
                }
            }
            for(int i=0;i<10;i++){
                cout<<arr[i];
            }
}