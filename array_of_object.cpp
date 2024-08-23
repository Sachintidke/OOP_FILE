#include<iostream>
using namespace std;
class student{
    public:
    char name[30];
    int roll_no,age;
    inline void accept(){
     cout<<"enter the name:-";
     cin>>name;

     cout<<"enter the roll_no:-";
     cin>>roll_no;

     cout<<"enter the age:-";
     cin>>age;
    }

     void display(){
        cout<<"name="<<name;
       cout<<"roll_no="<<roll_no;
       cout<<"age="<<age;         
     }
};
int main(){
    student s[10];
    for(int i=0;i<10;i++){
        s[i].accept();
    }
    for(int i=0;i<10;i++){
        s[i].display();
    }
    return 0;
}