#include<iostream>
using namespace std;
int fac(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
int main()
{
   int x=5;
   int r=fac(x);
   cout<<r;
}
