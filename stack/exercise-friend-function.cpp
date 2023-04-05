#include<iostream>
using namespace std;

class print1;

class print2{
    int printing;
public:
    print2(){
        printing =0;
    }
    void set_i(int status){
        printing = status;
    }

    friend bool inuse(print1 pa1,print2 pa2);
};

class print1{
    int printing;
public:
    print1(){
        printing =0;
    }
    void set_i(int status){
        printing = status;
    }

    friend bool inuse(print1 pa1,print2 pa2);
};

 bool inuse(print1 pa1,print2 pa2){
     if(pa1.printing ==1 || pa2.printing==1){
        return true;
     }else return false;
 }

int main(){

    bool t;
    print1 pa1;
    print2 pa2;

    pa1.set_i(1);
    pa2.set_i(1);

    t=inuse(pa1,pa2);

    if(t == true){
        cout<<"it is used"<<endl;
    }else{
        cout<<"it is not used"<<endl;
    }
return 0;
}
