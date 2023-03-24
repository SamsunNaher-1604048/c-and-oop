#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype{
    char *p;
    int len;

public:
    strtype(char *p);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr){
    len = strlen(ptr);
    p =(char *) malloc (len+1);

    if(!p){
        cout<<"error"<<endl;
        return;
    }
    strcpy (p , ptr);
}

strtype::~strtype(){
    cout<<"free menory"<<endl;
    free(p);
}

void strtype::show(){
    cout<<"show data"<<endl;
    cout<<"p"<<p<<endl;
    cout<<"*p"<<* p<<endl;
}

int main(){
    strtype s1("nillniti"),s2("nishi");
    s1.show();
    s2.show();

    s1 = s2;

    s1.show();
    s2.show();
return 0;
}
