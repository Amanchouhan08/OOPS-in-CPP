//Practice  question from oops concept.
#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age,roll_no;
    string grade;
    public:
    void setData(string n, int a, int r, string g){
          name=n;
          age=a;
          roll_no=r;
          grade=g;
    }
    void getData(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll_no<<endl;
    }
    //for getting the grade plz enter the name and age if data is valid then you get the grade data
    string secutity(string naam, int umar){
        if(naam==name && umar==age){
            cout<<grade<<endl;
        }
        else if(naam==name && umar!=age){
            cout<<"incorrect age"<<endl;
        }
        else if(naam!=name && umar==age){
            cout<<"incorrect naam"<<endl;
        }
        else{
            cout<<"both enter data is incorrect"<<endl;
        }
    }
};

int main(){
    Student s1;
    s1.setData("Aman", 23, 8, "A++");
    s1.getData();
    s1.secutity("satya",213);
    s1.secutity("Aman",28);
    s1.secutity("Aman",23);
    return 0;
}
