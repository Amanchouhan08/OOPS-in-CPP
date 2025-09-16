#include<iostream>
using namespace std;
//Bass class or parent class
class human{
    public:
    string name;
    int age;
};

//Drive class or child class
class student: public human{         //it is the way to create the drive or base class 
    public:   
    int weight,height;
};

int main(){
    student S1;
    S1.name="aman";
    S1.age=23;
    S1.weight=70;
    S1.height=5;
    cout<<S1.name<<" "<<S1.age<<" "<<S1.weight<<" "<<S1.height;
    return 0;
}
