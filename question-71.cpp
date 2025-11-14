// find all prime factors of a number

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            if (n%i==0)
            {
                cout<<i<< " ";
            }
        }
    }
}