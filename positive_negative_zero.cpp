#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"enter the value of num1:-";
    cin>>num1;

    if(num1<0)
    {
        cout<<"num1 is positive:-";
    }
    else if(num1>0)
    {
        cout<<"num1 is negative:-";
    }
    else
    {
        cout<<"num1 is zero:-";
    }
    return 0;
}