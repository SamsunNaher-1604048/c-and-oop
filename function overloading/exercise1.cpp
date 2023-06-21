#include<iostream>
#include<cstdlib>
using namespace std;

class myclass{
    int *p;
public:
    myclass(int i);
    ~myclass(){
        delete p;
    }
    friend int getval(myclass o);
};

myclass::myclass(int i){
    p = new int;
    if(!p){
        cout<<"allocation erreo"<<endl;
        exit(1);
    }
    *p = i;
}

int getval(myclass o){
    return *o.p;
}
int main(){
    myclass a(1),b(3);
    cout<<getval(a)<<endl;
    cout<<getval(b)<<endl;
 return 0;
}
