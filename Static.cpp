//They are the attributes of class or class member.
#include<iostream>
using namespace std;
class Customer{
  string name;
  int account,balance;
  static int total_customer;
  public:
  Customer(string name, int account, int balance ){
    this->name;
    this->account;
    this->balance;
    total_customer++;
  }
  void Display(){
    cout<<total_customer;
  }
};
int Customer::total_customer=0;
int main(){
    Customer C1("Aman",1,5000);
    Customer C2("satya",2,10000);
    Customer C3("Amit",3,55555);
    C1.Display();
    return 0;
}
