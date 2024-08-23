#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"enter the value of n:-";
     cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum +=i;
        }
    }
    cout<<"sum:-";
    return 0;
}