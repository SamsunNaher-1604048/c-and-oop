#include<iostream>
using namespace std;
int main(){

    double *p;
    p = new double(-123.907);

    if(!p){
        cout<<"allocation error"<<endl;
    }

    cout<<"the value of p: "<<p<<endl;
    cout<<"the value of *p: "<<*p<<endl;

    delete p;
return 0;
}
