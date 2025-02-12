#include<iostream>
using namespace std;

int comp_no =0, swap_no = 0;

int bsort(int arr[], int n)
{
    for(int a = 0; a<n-1; a++)
    {
        for(int i = 0; i<n-a-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
}

int seSort(int a[],int n)
{

    int i,j,loc,temp,min,accept_swap;

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            comp_no++;
            if(min>a[j])
            {
                min=a[j];
                accept_swap = j;
                loc=accept_swap;
            }
        }
        if (loc == accept_swap)
        {
            swap_no++;
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
}

int inSort(int arr[], int n)
{
    int i, temp, no_swap, comp=0;
    for(int pass = 0; pass< n-1; pass++)
    {
        i = pass;
        while(i>0)
        {
            comp ++;
            if (arr[i-1]>arr[i])
            {
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                no_swap++;
            }
            i--;
        }
    }

}

int main()
{
    int a1[8] = {1,3,6,2,8,4,9,7};
    cout<<"Array: ";
    for(int i=0; i<8; i++)
    {
        cout<<a1[i];
    }

    cout<<endl;
    cout<<"Bubble Sort = ";

    bsort(a1,8);

    for(int i=0; i<8; i++)
    {
        cout<<a1[i];
    }

    cout<<endl;
    cout<<"Selection Sort = ";
    seSort(a1,8);

    for(int i=0; i<8; i++)
    {
        cout<<a1[i];
    }
    cout<<endl;
    cout<<"Insertion Sort = ";
    inSort(a1,8);

    for(int i=0; i<8; i++)
    {
        cout<<a1[i];
    }

    return 0;
}
