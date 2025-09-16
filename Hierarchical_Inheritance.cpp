#include<iostream>
using namespace std;
//base class
class father{
    public:
    string father_name;
};
//one drive class
class mother:public father{
    public:
    string mother_name;
    mother(string father_name,string mother_name ){
        this->father_name=father_name;
        this->mother_name=mother_name;
    }
    void Display(){
        cout<<father_name<<" "<<mother_name<<endl;
    }
};

//other drive class
class son: public father{
    protected:
    string son_name;
    public:
    //constructor or we make function to access them if they are in private or protected class based on that.
    son(string father_name,string son_name ){
        this->father_name=father_name;
        this->son_name=son_name;
    }
    void Display(){
        cout<<father_name<<" "<<son_name;
    }

};
int main(){
    mother m("Aman","sonam");
    m.Display();
    son s("Aman","As");
    s.Display();
    return 0;
}
