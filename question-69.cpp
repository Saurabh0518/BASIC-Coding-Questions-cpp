// how to check a perfect square

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int s = sqrt(n);
    if(s*s == n)
    {
        cout<<" perfect square";
    }
    else
    {
        cout<<"not a perfect square";
    }
}