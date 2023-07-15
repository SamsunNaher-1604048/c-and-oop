#include<iostream>
using namespace std;

void f(unsigned char c){
    cout<<c<<"unsigned"<<endl;
}

void f(char c){
    cout<<c<<"char"<<endl;
}
int main(){
    f('c');
    f(85);
return 0;
}
