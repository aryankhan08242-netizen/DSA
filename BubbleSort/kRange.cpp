#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
float min(float a, float b){
    if(a>b){
        return b;
    }
    else return a;
}
float max(float a, float b){
    if(a>b){
        cout<<a;
    }
    else cout<<b;
}
int main(){
    int arr[]={5,3,3,10};
    int n=4;
    float Kmin=(float)INT_MIN;
    float Kmax=(float)INT_MAX;
    bool flag=true;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            Kmin=max(Kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            Kmax=min(Kmax,(arr[i]+arr[i+1])/2.0);
        }
       
        if(Kmin>Kmax){
            flag=false;
            break;
               
        }
        

    }
    if(flag==false){
        cout<<-1;
    }
    
    else if(Kmin==Kmax){
        
            if(Kmin-(int)Kmin==0){
                cout<<"Only one value of K we have"<<Kmin;
            }
            else{
                cout<<-1;
            }
        
    }
    else{
        if(((Kmin-(int)Kmin)>0)){
        Kmin=(int)Kmin+1;
        cout<<"Value of K "<<"["<<Kmin<<","<<Kmax<<"]";
    }
}
}