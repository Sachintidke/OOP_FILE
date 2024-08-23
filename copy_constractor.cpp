#include<iostream>
using namespace std;
class circle{
    float r,a;
    public:
    circle(float x){
        r=x;
    }
    circle(circle & c)
    {
        r=c.r;
    }
    void compute();
    void display();
};
inline void circle::compute(){
    a=3.14*r*r;
}
inline void circle::display(){
    cout<<"radiu="<<r;
    cout<<"area="<<a;
}
int main(){
    float p;
    cout<<"enter radius:-";
    cin>>p;
    circle c1(p);
    c1.compute ();
    c1.display();
    return 0;
}