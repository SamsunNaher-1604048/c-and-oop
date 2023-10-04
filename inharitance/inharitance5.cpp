#include<iostream>
using namespace std;

class base{
public:
    base(){
        cout<<"it is base class constractor"<<endl;
    }
    ~base(){
         cout<<"it is base class destractor"<<endl;
    }
};

class derived:public base{
public:
    derived(){
       cout<<"it is derived class constractor"<<endl;
    }
    ~derived(){
       cout<<"it is derived class destractor"<<endl;
    }
};
int main(){
    derived ob;
return 0;
}
