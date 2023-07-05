#include<iostream>
using namespace std;

void f(int a,int b=0,int c=0){
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){
    f(3);
    f(7);
    f(6,9);
return 0;
}
