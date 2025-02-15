#include<iostream>
using namespace std;

int comp_no =0, swap_no =0;

int bSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            comp_no++;
            if(arr[j]>arr[j+1])
            {
                swap_no++;
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int seSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            comp_no++;
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
        swap_no++;
    }
}

int inSort(int arr[], int n)
{
    for(int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;
        comp_no++;
        while (i>=0 and arr[i]>key)
        {
            arr[i+1] = arr[i];
            i = i - 1;
            swap_no++;
        }
        arr[i+1] = key;
        swap_no++;
    }
}

int main()
{
    int a[5]= {5,4,3,2,1};
    for(int i = 0; i<5; i++)
        cout<<a[i]<<" ";

    cout<<endl;

    //bSort(a,5);
    //inSort(a,5);
    seSort(a,5);

    for(int i = 0; i<5; i++)
        cout<<a[i]<<" ";

    cout << endl << endl;

    cout << "\nNumber of comparisons: " <<comp_no << endl;
    cout << "\nNumber of exchanges: " <<swap_no << endl << endl;
    return 0;
}
