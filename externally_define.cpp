#include<iostream>
using namespace std;

class circle{
    float r,a;
    public:

    void read();
    void compute();
    void display();
};
void circle::read(){
    cout<<"enter radius:-";
    cin>>r;
}
void circle::compute(){
  a=3.14*r*r;
}
void circle::display(){
    cout<<"area of circle:-"<<a;
}
int main(){
    circle c;
    c.read();
    c.compute();
    c.display();
    return 0;
}