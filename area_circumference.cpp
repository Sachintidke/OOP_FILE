#include<iostream>
using namespace std;
int main()
{
    int rad,circum,dia,area;
    float pi=3.14;
   cout<<"enter the value of radius of circle:-";
   cin>>rad;

   dia=2*rad;
   cout<<"daimeter:-"<<dia<<endl;

   circum=2*pi*rad;
   cout<<"circumfernce:-"<<circum<<endl;

   area=pi*rad*rad;
   cout<<"area of circle:-"<<area<<endl;

   return 0;
}