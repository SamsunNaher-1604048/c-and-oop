#include<iostream>
using namespace std;

class base{
    int i;
public:
    base(int n){
        cout<<"it is base class constractor"<<endl;
        i = n;
    }
    ~base(){
         cout<<"it is base class destractor"<<endl;
    }
    void showi(){
        cout<<i<<endl;
    }
};

class derived:public base{
    int j;
public:
    derived(int n):base(n){
       cout<<"it is derived class constractor"<<endl;
       j=n;
    }
    ~derived(){
       cout<<"it is derived class destractor"<<endl;
    }
    void showj(){
        cout<<j<<endl;
    }
};
int main(){
    derived ob(20);
    ob.showi();
    ob.showj();

return 0;
}
