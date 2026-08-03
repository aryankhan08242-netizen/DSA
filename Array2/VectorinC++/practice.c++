#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        cout<<endl;
    }
   
    int target = 6;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ( num[i] + num[j] == target)
            {
            cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
}
