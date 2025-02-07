#include<iostream>
using namespace std;

int comp_no =0, swap_no =0;

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
    cout<<"Given Array: ";
    int a[5] = {5,4,3,2,1};
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Sorted Array: ";

    inSort(a,5);
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }

        cout << endl << endl;

    cout << "\nNumber of comparisons: " <<comp_no << endl;
    cout << "\nNumber of exchanges: " <<swap_no << endl << endl;
    return 0;
}

