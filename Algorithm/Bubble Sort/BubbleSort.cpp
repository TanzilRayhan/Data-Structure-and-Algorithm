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

int main()
{
    cout<<"Given Array: ";
    int a[5] = {5,4,3,2,1};
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Sorted Array: ";

    bSort(a,5);
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }

        cout << endl << endl;

    cout << "\nNumber of comparisons: " <<comp_no << endl;
    cout << "\nNumber of exchanges: " <<swap_no << endl << endl;
    return 0;
}
