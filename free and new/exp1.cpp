#include<iostream>
using namespace std;
int main(){
    //fot float
    float *p;
    p = new float;
    if(!p){
        cout<<"error in memory allocation for float"<<endl;
        return 1;
    }
    *p=1000.01;
    cout<<"the float value: "<<*p<<endl;
    delete p;

    //for long int;
    long int *p_int;
    p_int = new long int;
    if(!p_int){
        cout<<"error in memory allocation for long int "<<endl;
        return 1;
    }
    *p_int=1000;
    cout<<"the long int value: "<<*p_int<<endl;
    delete p_int;

    //char

    char *p_char;
    p_char = new char;
    if(!p_char){
        cout<<"error in memory allocation for char"<<endl;
        return 1;
    }
    *p_char = 'N';
    cout<<"the char value: "<<*p_char<<endl;
    delete p_char;

return 0;
}
