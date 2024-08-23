#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"enter the marks of subject 1:-";
    cin>>sub1;
    cout<<"enter the marks of subject 2:-";
    cin>>sub2;
    cout<<"enter the marks of subject 3:-";
    cin>>sub3;
    cout<<"enter the marks of subject 4:-";
    cin>>sub4;
    cout<<"enter the marks of subject 5:-";
    cin>>sub5;

    int total=sub1+sub2+sub3+sub4+sub5;
    cout<<"total marks:-"<<total<<endl;
    float percent=(total/500)*100;

    cout<<"percentage :-"<<percent<<endl;

    return 0;
}