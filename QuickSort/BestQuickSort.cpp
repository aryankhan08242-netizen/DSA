#include<iostream>
using namespace std;
int Partition(int arr[],int si, int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(pivotElement>=arr[i]){
          count++;
        } 
    }
    
        int pivotIndx=count+si;
        swap(arr[(si+ei)/2],arr[pivotIndx]);
        int i=si;
        int j=ei;
        while(i<pivotIndx && j>pivotIndx){
            if(arr[i]<=pivotElement) i++;
            else if(arr[i]>pivotElement && arr[j]<pivotElement){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            else j--;
        }
        return pivotIndx;
    
}
void quickSort(int arr[], int si, int ei){
     if(si>=ei){
        return;
     }
     int PivotIndx=Partition(arr,si,ei);
     quickSort(arr,si,PivotIndx-1);
     quickSort(arr,PivotIndx+1,ei);
}
int main(){
    int arr[]={5,1,8,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}