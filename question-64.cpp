// pattern printing of alphabets like( a ab abc abcd abcde) in triangle form.

#include <iostream>
using namespace std;
int main ()
{
    char c;

  for(int i=1;i<6;i++)
  {
    c = 'A';
    for(int j=1;j<=i;j++)
    {
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
  }
  cout<<"This is how you print theses patterns.";
}

