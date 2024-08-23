#include<iostream>
using namespace std;
class circle{
    float r,a;
    public:
    circle(){
        cout<<"enter the radius:-";
        cin>>r;
    }
    void compute();
    void display();

};
inline void circle::compute(){
    a=1.14*r*r;
}
inline void circle::display(){
    cout<<"radius="<<r;
    cout<<"area="<<a;
}
int main(){
    circle c;

c.compute();
c.display();
return 0;
}