#include<iostream>
using namespace std;

void swapValue(int &x, int &y){
    int t;
    t=x;
    x=y;
    y=t;
}
int main(){
    int i,j;
    i=10;
    j=15;

    cout<<"value of i before swaping"<<i<<endl;
    cout<<"value of j before swaping"<<j<<endl;

    swapValue(i,j);

    cout<<"value of i after swaping"<<i<<endl;
    cout<<"value of j after swaping"<<j<<endl;

return 0;
}
