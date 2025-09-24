//Display only essensial information and hidden the crucial details.
#include<iostream>
using namespace std;
class Customer{
  string name;
  int balance;
  public:
  Customer(string name,int balance){
    this->name=name;
    this->balance=balance;
  }
  void Deposit_amount(int amount){
       if(amount>0){
        balance+=amount;
       }
       else{
        cout<<"invalid amount"<<endl;
       }
  }
   void withdraw_amount(int amount){
       if(amount<=balance&&amount>0){
        balance-=amount;
       }
       else{
        cout<<"invalid amount"<<endl;
       }
  }
  void Display(){
    cout<<name<<" "<<balance<<endl;
  }

};
int main(){
    Customer C1("Aman",5000);
    Customer C2("satya",10000);
    C1.Deposit_amount(500);
    C2.withdraw_amount(100);
    C1.Display();
    C2.Display();
    return 0;
}
