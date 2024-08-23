#include<iostream>
using namespace std;
class circle{
    float r,a;
    public:
    circle(float x){
        r=x;
    }
    void compute();
    void display();
};
inline void circle::compute(){
    a=3.14*r*r;
}
inline void circle::display(){
    cout<<"radius:-"<<r;
    cout<<"area:-"<<a;
}
int main(){
    float n;
    cout<<"enter radius:-";
    cin>>n;

    circle c(n);
    c.compute();
    c.display();
    return 0;
}