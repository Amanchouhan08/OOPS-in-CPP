//They are the attributes of class or class member.
//Static member function.
//if we use static then every object point that.
#include<iostream>
using namespace std;
class Customer{
  string name;
  int account,balance;
  static int total_customer;
  public:
  Customer(string name, int account, int balance ){
    this->name=name;
    this->account=account;
    this->balance=balance;
    total_customer++;
  }
  void Display(){
    cout<<total_customer;
  }
//static member function
static void Dis_tot_cus(){
     cout<<"total customer in this bank is  "<<total_customer<<endl;
}

};
int Customer::total_customer=0;
int main(){
    Customer C1("Aman",1,5000);
    Customer C2("satya",2,10000);
    Customer C3("Amit",3,55555);
    Customer:: Dis_tot_cus();
    C1.Display();
    return 0;
}
