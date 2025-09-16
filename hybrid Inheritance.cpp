#include<iostream>
using namespace std;

class student{
    public:
    void student_print(){
        cout<<"i am student"<<endl;
    }
};

class male:public student{
    public:
    void male_print(){
        cout<<"i am male"<<endl;
    }
};

class female:public student{
    public:
    void female_print(){
        cout<<"i am female"<<endl;
    }
};

class boy:public male {
    public:
    void boy_print(){
        cout<<"i am boy"<<endl;
    }
};

class girl:public female{
    public:
    void girl_print(){
        cout<<"i am girl"<<endl;
    }
};

int main(){
    boy b;
    b.student_print();
    b.boy_print();
    b.male_print();
    girl g;
    g.student_print();
    g.girl_print();
    g.female_print();
    return 0;
}
