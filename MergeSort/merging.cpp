#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> a, vector<int> b, vector<int> &ans)
{
    int n1 = a.size();
    int n2 = b.size();
    int n = n1 + n2;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            ans[k] = a[i];
            i++;
           
        }
        else
        {
            ans[k] = b[j];
           
            j++;
        }
        k++;
    }
       while(i<n1){
        ans[k]=a[i];
        k++,i++;
    }
     while(j<n2){
        ans[k]=b[j];
        k++,j++;
    }
}
void mergesort(vector<int> &ans){
    int n= ans.size();
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    if(n==0 || n==1) return;
        for(int i=0; i<n1; i++){
            a[i]=ans[i];
        }
        for(int i=0; i<n2; i++){
            b[i]=ans[n1+i];
        }
        mergesort(a);
        mergesort(b);
        merge(a,b,ans);
           

    

}
int main()
{
    vector<int> a = {1, 3, 4, 5, 6};
    vector<int> b = {8, 9, 11, 14, 19};
    
    int n1 = a.size();
    int n2 = b.size();
    int n = n1 + n2;
       vector<int>ans={5,3,0,4,9,6};
    // merge(a, b, ans);
   mergesort(ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}