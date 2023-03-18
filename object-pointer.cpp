#include<iostream>
using namespace std;

class myclass{
    int a;
public:
    myclass(int x);
    int get();
};

myclass::myclass(int x){
    a=x;
}

int myclass::get(){
    return a;
}

int main(){
    myclass obj(120);
    myclass *p;

    p = &obj;

    cout<<"value using object"<<obj.get()<<endl;
    cout<<"value using pointer"<<p->get()<<endl;

return 0;
}
