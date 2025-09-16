#include<iostream>
using namespace std;
//Base class
class grandFather{
    protected:
    string grandFather_name;
    int grandFather_age;
};
//Drive class
class father: public grandFather{
    protected:
    string Father_name;
    int Father_age;
};
//Drive class
class son: public father{
    protected:
    string son_name;
    int son_age;
    public:
    //constructor for easy access
    son(string grandFather_name, string Father_name, string son_name, int grandFather_age,int Father_age, int son_age){
        this->grandFather_name=grandFather_name;
        this->Father_name=Father_name;
        this->son_name=son_name;
        this->grandFather_age=grandFather_age;
        this->Father_age=Father_age;
        this->son_age=son_age;
    }

    void Display(){
        cout<<"grand father name and age is: "<<grandFather_name<<", "<<grandFather_age<<", father name and age is: "<<Father_name<<", "<<Father_age<<", son name and age is: "<<son_name<<" "<<son_age;
    }

};
int main(){
    son s1("amit","hmit","samt",65,45,25);
    s1.Display();
    return 0;
}
