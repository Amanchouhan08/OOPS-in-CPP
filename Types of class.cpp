//public, protected, private
//private>protected>public
#include<iostream>
using namespace std;
class Type_of_class{
   private:
     int a;
   protected:
      int b;
    public:
       int c;
void access(){    //a and b not access from the outside.
  a=10;
  b=20;
}
void display(){
    cout<<a<<" "<<b<<" "<<c<<" ";
}

};
int main(){
  Type_of_class C1;
  C1.access();
  C1.c=30;
  C1.display();
return 0;
}
