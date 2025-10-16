//insert value in private class using function
//in public class we can access directly.
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
        cout<<grade<<endl;
    }
};

int main(){
    Student s1;
    s1.setData("Aman", 23, 8, "A++");
    s1.getData();
    
    return 0;
}
