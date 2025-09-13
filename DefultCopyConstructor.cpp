//Defult copy construction "How we can copy one object to another"
#include<iostream>
using namespace  std;
class Bank{
     string name;
     int balance;
     int code;
    public:
    Bank(){
      name="Aman";
      balance=5000;
      code=123;
    }
    void Display(){
        cout<<name<<" "<<balance<<" "<<code<<endl;
    }

};

int main(){
    Bank B1;
    B1.Display();
    cout<<" copy the B1 data in B2"<<endl;
    Bank B2(B1);
    B2.Display();
    cout<<" copy using assignment operator"<<endl;
    Bank B3;
    B3=B2;
    B3.Display();
    return 0;
}
