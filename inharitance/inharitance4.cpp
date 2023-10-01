#include<iostream>
using namespace std;

class base{
protected:
    int a,b;
public:
    void setab(int n,int m){
        a = n;
        b = m;
    }
};


class derived:public base{
    int c;
public:
    void setc(int n){
        c = n;
    }
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main(){
    derived ob;
    ob.setab(10,15);
    ob.setc(20);
    ob.show();
return 0;
}
