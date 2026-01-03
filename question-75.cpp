// Reverse of an string

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int sum1 = 0;
    int sum2 = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
       sum1 = sum1 + i;
    }
    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + i;
    }
    cout<<sum1 - sum2;
}