//if we not declear the class as public then it is by defult private class.
//In private class we not access directly throught object.
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age, roll;
    string grad;
};

int main(){
  
    student s1;
    s1.name="Aman";
    s1.age=23;
    s1.roll=8;
    s1.grad="A+";

    student s2;
    s2.name="Amit";
    s2.age=25;
    s2.roll=9;
    s2.grad="A++";

    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll<<" "<<s1.grad<<endl;
    cout<<s2.name<<" "<<s2.age<<" "<<s2.roll<<" "<<s2.grad<<endl;

}
