#include<iostream>
using namespace std;

void f(int *n);
int main(){
    int i=0;
    f(&i);
    cout<<"The value of i  "<<i<<endl;
return 0;
}
void f(int *n){
    *n=100;
}
