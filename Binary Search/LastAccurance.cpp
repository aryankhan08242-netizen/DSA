#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,2,2,3,3,3,5,8,8};
    int n = 10;
    int x = 3;

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){

        int mid = low + (high - low) / 2;

        if(arr[mid] == x){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    cout << "Last occurrence = " << ans;

    return 0;
}