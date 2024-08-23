#include<iostream>
using namespace std;
class circle{
    float r,a;
    public:

    void read(){
        cout<<"enter the radius:-";
        cin>>r;
    }
    
    void compute(){
        a=3.14*r*r;
        
    }
    void display(){
        cout<<"area of circle:-"<<a;
    }
};
int main(){
    circle c;
    c.read();
    c.compute();
    c.display();
    return 0;
}