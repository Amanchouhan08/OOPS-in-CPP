//It is alast function which is going to call before objet is destory.
//The class, constructor, distructor name shuld be same but in constructor we have to use this symbol ~ 
//Constructor and distructor is created by the compiler itself.
//but once we created the Constructor and distructor after that compiler will con creater this.
#include<iostream>
using namespace std;
class Customer{
   string name;
   int age;
   public:
//constructor
   Customer(){
    cout<<"Constructor is created"<<endl;
   }
   //Distructor
   ~Customer(){
    cout<<"Distructor is created";
   }
};
int main(){
    Customer C1;
    return 0;
}
