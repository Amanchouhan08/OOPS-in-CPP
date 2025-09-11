//constructor name and class name must be same.
//constructors are not return type.
#include<iostream>
using namespace std;
class Student{
    string name;
    int age,roll;
    public:
    //defult construction
    Student(){
        cout<<"it is a defult constructor"<<endl;
        name="Aman";
        age=23;
        roll=8;
    }
    //parameterized constructor
   /* Student(string a,int b, int c){
        name=a;
        age=b;
        roll=c;
    }  */
    //inline construction
    inline Student(string a, int b,int c):name(a),age(b),roll(c){
    }
    //constructor overLoding    because more then two constructor with same name and with different parameter.
    Student(string name,int age){
        this->name=name;       //if constructor parameter are same with class variables then use "this" keyword and its is use to point the object variable.
        (*this).age=age;      //this-> and (*this). both ade same
        roll=40;
    }
    void display(){          //display function
        cout<<name<<" "<<age<<" "<<roll<<" "<<endl;
    }
};

int main(){
    Student s1;
    s1.display();
    Student s2("Amit",25,9);
    s2.display();
    Student s3("Satya",22);
    s3.display();
    return 0;
}


