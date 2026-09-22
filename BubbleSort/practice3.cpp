#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n; cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i; j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);

    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max;
    int max_el=INT_MIN;
    for(int i=0 ;i<n; i++){
if(arr[i]>max_el){
    max_el=arr[i];
}
    }
    cout<<max_el<<endl;
    for(int i=0; i<5; i++){
        arr[i]=-(arr[i]-max_el);
    }
      for(int i=0; i<5; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr, arr +n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}