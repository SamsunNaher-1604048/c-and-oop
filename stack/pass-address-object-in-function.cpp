#include<iostream>
using namespace std;

class samp{
    int i;

public:
    samp(int n){i=n;}
    void set_i(int n){i=n;}
    int get_i(){return i;}
};

void sqrt(samp *o){
    o->set_i(o->get_i()*o->get_i());
    cout<<"now the value of i inside function"<<o->get_i()<<endl;
}



int main(){
    samp a(10);
    sqrt(&a);
    cout<<"the value of outside function of i"<<a.get_i()<<endl;
return 0;
}
