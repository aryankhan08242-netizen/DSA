#include <iostream>
using namespace std;
int Partition(int arr[], int si, int ei)
{
    int pivotElement = arr[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++)
    {
        if (pivotElement >= arr[i])
        {
            count++;
        }
    }

    int pivotIndx = count + si;
    swap(arr[si], arr[pivotIndx]);
    int i = si;
    int j = ei;
    while (i < pivotIndx && j > pivotIndx)
    {
        if (arr[i] <= pivotElement)
            i++;
        else if (arr[i] > pivotElement && arr[j] < pivotElement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else
            j--;
    }
    return pivotIndx;
}
int quickSort(int arr[], int si, int ei, int k)
{
    int PivotIndx = Partition(arr, si, ei);
    if (PivotIndx + 1 == k)
    {
        return arr[PivotIndx];
    }
    else if (PivotIndx + 1 < k)
        {
            return quickSort(arr, si, PivotIndx - 1, k);
        }

    else
        return quickSort(arr, PivotIndx + 1, ei, k);
}
int main()
{
    int arr[] = {9, 6, 3, 0, 4, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    int k = 3;
    cout << quickSort(arr, 0, n - 1, k);
}