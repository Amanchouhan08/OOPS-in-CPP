//Padding is use to read fast data
//for that think we have to use Greedy method means write high size datatype first

#include<iostream>
using namespace std;
class paddy{
    char a;
    int i;
};
int main(){
    paddy p;
    cout<<sizeof(p);
    return 0;
}

//its output is 8 byte beacuse char take one byte and next 3 byte is paddy and 4 byte is int.
