#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype (char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr){
    len=strlen(ptr);
    p = (char *)malloc(len+1);
    if(!p){
        cout<<"not successfully allocated";
        return ;
    }
    strcpy(p,ptr);
}

strtype::~strtype(){
    cout<<"free the memory";
    free(p);
}

void strtype::show(){
    cout<<p<<endl;
}

int main(){
    strtype s1("i am nishi"),s2("i am niti");
    s1.show();
    s2.show();
return 0;
}
