#include <iostream>
using namespace std;
int main()
{int n,m;
    cout<<"Enter number of row";
    cin>>n;
    cout<<endl;
    cout<<"Enter number of column :";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    cout << "Now, Printing Transpose of matrix";
    cout<<endl;
    int t[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< n; j++)
        {
            t[i][j]=arr[j][i];
        }
        cout<<endl;
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0;  j< n; j++)
        {
           cout<< t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
}
