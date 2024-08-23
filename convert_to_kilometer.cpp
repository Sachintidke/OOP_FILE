#include<iostream>
using namespace std;
int main()
{
    float length_in_cm;

    cout<<"enter the value of length in centimeter:-";
    cin>>length_in_cm;

    float length_in_meter=length_in_cm/100;
    float length_in_kilometer=length_in_cm/100000;

    cout<<"the length in meter:-"<<length_in_meter<<endl;
    cout<<"the length in kilometer:-"<<length_in_kilometer<<endl;

    return 0;
}