#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    vector<int> v2(v1.size());
    for (int i = 0; i < v1.size(); i++)
    {
        int j = v1.size() - 1 - i;
        v2[j] = v1[i];
    }
    display(v1);
    display(v2);
}