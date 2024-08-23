#include<iostream>
using namespace std;
class test{
    int n;
    public:
    test(){
        cout<<"enter the value of n:-";
        cin>>n;
    }
    inline void display(){
        cout<<"value of n:-"<<n;
    }
    ~ test (){
        cout<<"distroy";
    }
};
int main(){
    test t;
    return 0;

}