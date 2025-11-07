//  pattern printing like (a bc def ghij klmno) in triangle form

#include <iostream>
using namespace std;
int main ()
{
    char c = 'A';
    int i = 1;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
      char d = 'A';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<d<<" ";
            d++;
        }
        cout<<endl;
    }
}

