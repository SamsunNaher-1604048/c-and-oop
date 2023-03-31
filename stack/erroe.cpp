#include<iostream>
#include<cstdlib>
using namespace std;

class dyan{
    int *p;
public:
    dyan(int i);
    ~dyan(){
        free(p);
        cout<<"menory free"<<endl;
    }
    int get(){
        return *p;
    }
};

dyan::dyan(int i){
    p = (int *) malloc(sizeof (int));
    if(!p){
        cout<<"allocation fail"<<endl;
        return ;
    }
    *p =i;
}

//return negative
int neg(dyan ob){
    return -ob.get();
}
int main(){
    dyan o(-10);

    cout<<o.get()<<endl;
    cout<<neg(o)<<endl;

    dyan o1(20);
    cout<<o1.get()<<endl;
    cout<<neg(o1)<<endl;

    cout<<o.get()<<endl;
    cout<<neg(o)<<endl;

return 0;
}
