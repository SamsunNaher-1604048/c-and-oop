#include<iostream>
using namespace std;

class myclass{
    int who;
public:
    myclass(int n){
        who = n;
        cout<<"construct function"<<endl;
    }

    ~myclass(){
        cout<<"destriction"<<endl;
    }

    int id(){
        return who;
    }
};

void f(myclass &o){
    cout<<"recived"<<o.id()<<endl;
}


int main(){
    myclass x(2);
    f(x);
 return 0;
}
