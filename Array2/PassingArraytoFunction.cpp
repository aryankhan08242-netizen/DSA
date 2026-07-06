#include<iostream>
using namespace std;
void display(int a[]){
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}
void change(int b[]){
b[3]=4;
}
int main(){
    int arr[10]={1,2,3,48,5};
    display(arr);
    change(arr);
    display(arr);
}