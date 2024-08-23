#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter the value of num1:-";
    cin>>num1;
    cout<<"enter the value of num2:-";
    cin>>num2;
    cout<<"enter the value of num3:-";
    cin>>num3;
    if(num1>num2)
    {
        cout<<"num1 is maximum value:-";
    }
    else if(num1<num2)
    {
        cout<<"num2 is maximum value:-";
    }
    else{
        cout<<"num3 is maximum value:-";
    }
    return 0;
}