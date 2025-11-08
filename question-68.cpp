// Remove vowel from string

#include <iostream>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='A')
        {continue;}
        else if(str[i]=='e' || str[i]=='e')
        {continue;}
        else if(str[i]=='i' || str[i]=='I')
        {continue;}
        else if(str[i]=='o' || str[i]=='O')
        {continue;}
        else if(str[i]=='U' || str[i]=='u')
        {continue;}
        else
        {cout<<str[i];}

    }
}