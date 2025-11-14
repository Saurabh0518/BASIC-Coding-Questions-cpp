//  degree celcius to degree fahrenheit and vice versa

#include <iostream>
using namespace std;
int main ()
{
    float c,f;
    cout<<"enter the temperature in degree celcius : "<<endl;
    cin>>c;
    f = (c*9/5)+32;
    cout<<"temperature in degree fahrenheit is : "<<f<<endl;
    cout<<"enter the temperatue in fahrenheit : "<<endl;
    cin>>f;
    c = ((f-32)*5)/9;
    cout<<"temperature in degree celcius is : "<<c;
}