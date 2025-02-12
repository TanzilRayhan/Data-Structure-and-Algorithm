#include <iostream>
using namespace std;

void printArray(int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int * arr, int l, int m, int h)
{
    int i, j, k;
    int nL = m - l + 1;
    int nR = h - m;

    int L[nL], R[nR];

    for (int a = 0; a < nL; a++)
    {
        L[a] = arr[l + a];
    }
    for (int a = 0; a < nR; a++)
    {
        R[a] = arr[m + 1 + a];
    }

    i = 0; j = 0; k = l;

    while (i < nL && j < nR)
    {

        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < nL)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
    while (j < nR)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
}

void mergeSort(int * arr, int l, int h)
{
    int m;
    if (l < h)
    {
        m = (l + h) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}

int main()
{
    int arr[] = {11, 25, 5, 9, 20, 12, 15};

    int n = sizeof(arr) / sizeof(int);

    cout << "Array before Sorting: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Array after Sorting: ";
    printArray(arr, n);

    return 0;
}

