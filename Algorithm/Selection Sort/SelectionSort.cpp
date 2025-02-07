#include<iostream>
using namespace std;

int comp_no =0, swap_no =0;


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


int main()
{
    cout<<"Given Array: ";
    int a[5] = {5,4,3,2,1};
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Sorted Array: ";

    seSort(a,5);
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }

        cout << endl << endl;

    cout << "\nNumber of comparisons: " <<comp_no << endl;
    cout << "\nNumber of exchanges: " <<swap_no << endl << endl;
    return 0;
}
