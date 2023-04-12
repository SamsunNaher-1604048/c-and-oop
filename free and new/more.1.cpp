#include<iostream>
using namespace std;
int main(){
    int *p;
    p = new int(9);

    if(!p){
        cout<<"allocation error"<<endl;
        return 1;
    }

    cout<<"the value of p"<<*p<<endl;
    cout<<"the address of p"<<p<<endl;
    delete p;
return 0;
}
