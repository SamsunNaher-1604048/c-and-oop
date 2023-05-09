#include<iostream>
using namespace std;

class myClass{
    int x;
public:
    myClass(){
        x=0;
    };
    myClass(int n){
      x=n;
    }

    int getx(){
        return x;
    }
};

int main(){

    myClass o1(10);
    myClass o2;

    cout<<o1.getx()<<endl;
    cout<<o2.getx()<<endl;
return 0;
}
