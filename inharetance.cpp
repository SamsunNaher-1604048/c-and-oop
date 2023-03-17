#include <iostream>
using namespace std;

//base class
class B{
    int i;
public:
    void set_i(int n);
    int get_i();
};


//Derive class
class D:public B{
    int j;
public:
    void set_j(int j);
    int mull();
};

//set value in base class

void B::set_i(int n){
    i=n;
}

int B::get_i(){
    return i;
}

//set value in derive calss

void D::set_j(int n){
    j=n;
}

int D::mull(){
    return j*get_i();
}



int main(){

    D ob;

    ob.set_i(4);
    ob.set_j(10);

    cout<<ob.mull();

return 0;
}
