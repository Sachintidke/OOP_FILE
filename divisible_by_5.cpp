#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"enter the value of num1:-";
    cin>>num1;
    if(num1%5==0)
    {
        cout<<"num1 is divisible by 5:-";
    }
    else if(num1%11==0)
    {
        cout<<"num1 is disible by 11:-";
    }
    else
    {
        cout<<"num1 is not divisible:-";
    }
    return 0;


}