#include<iostream>
using namespace std;

class myclass{
    myclass();
    myclass(const myclass &o);
    myclass f();
};

myclass::myclass(){
    cout<<"constructing normal"<<endl;
}

//copying constractor

myclass::myclass(const myclass &o){
   cout<<"copying cnstractor"<<endl;
}

//returning a object
myclass myclass::f(){
    myclass temp;
    return temp;
}
int main(){
    myclass obj;
    obj = obj.f();
    return 0;
return 0;
}
