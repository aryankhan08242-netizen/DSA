#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Rows in 1 first Matrix"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of Column in 1 first Matrix"<<endl;
    cin>>m;
    int p,q;
    cout<<"Enter the number of Rows in 2 first Matrix"<<endl;
    cin>>p;
    cout<<"Enter the number of Rows in 2 first Matrix"<<endl;
    cin>>q;
    if(n==p){
    int mat1[n][m];
    int mat2[p][q];
    cout<<"Enter the element of matrix 1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the element of matrix 2";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>mat2[i][j];
        }
    }
    
        int res[m][q];
      for(int i=0;i<m;i++){
        for(int j=0; j<q;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=mat1[i][k]*mat2[k][j] ;
  
            }
        }
      }cout<<"The Product of two matrix are"<<endl;
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    } 
    }
    else{
        cout<<"It should be the matrix 1 rowa is not equal to the column of second number";
    }

}
