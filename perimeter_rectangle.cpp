#include<iostream>
using namespace std;
int main() 
{
    int length,width,perimeter;
    cout<<"enter the value of length :-";
    cin>>length;
    cout<<"enter the value of of width:-";
    cin>>width;
    perimeter=2*(length+width);
    cout<<"area of rectangle :-"<<perimeter;
    return 0;
}