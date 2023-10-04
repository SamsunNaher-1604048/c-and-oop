#include<iostream>
using namespace std;
class base{
public:
    base(){
        cout<<"constractor from base class"<<endl;
    }
    ~base(){
        cout<<"destractor from base class"<<endl;
    }
};

class  derived:public base{
    int j;
public:
    derived(int n){
        cout<<"constractor from derived class"<<endl;
        j=n;
    }
    ~derived(){
        cout<<"destractor from derived class"<<endl;
    }
    void show(){
        cout<<j<<endl;
    }
};
int main(){
    derived ob(10);
    ob.show();
return 0;
}
