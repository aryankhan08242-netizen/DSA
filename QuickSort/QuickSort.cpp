#include<iostream>
using namespace std;
int Partition(int arr[],int si, int ei){
    int pivotElement=arr[si];
    int count=0;
    for(int i=si+1; i<=ei; i++){
        if(pivotElement>=arr[i]){
          count++;
        }
    }
    
        int pivotIndx=count+si;
        swap(arr[si],arr[pivotIndx]);
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
    int arr[]={9,6,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}