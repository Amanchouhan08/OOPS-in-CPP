//Dynamic memory Allocation
#include<iostream>
using namespace std;
class Student{
 public:
  string name;
  int age,roll;
  string grad;
};
int main(){
    Student *S=new Student;    //new is keyword use to Dynamic memory Allocation
    (*S).name="Aman";
     S->age=23;         //(*S) and S->  both line are same
     (*S).roll=8;
     S->grad="A++";

     cout<<(*S).name<<" "<<S->age<<" "<<(*S).roll<<" "<<S->grad;
     return 0;
}
