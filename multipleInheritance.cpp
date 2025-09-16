#include<iostream>
using namespace std;
//base class
class father{
    public:
    string father_name;
};
//base class
class mother{
    public:
    string mother_name;
};

//Drive class from father and mother class
class son: public father, public mother{
    protected:
    string son_name;
    public:
    //constructor or we make function to access them if they are in private or protected class based on that.
    son(string father_name,string  mother_name,string son_name ){
        this->father_name=father_name;
        this->mother_name=mother_name;
        this->son_name=son_name;
    }
    void Display(){
        cout<<father_name<<" "<<mother_name<<" "<<son_name;
    }

};
int main(){
    son s("aniket","babita","abhi");
    s.Display();
    return 0;
}
