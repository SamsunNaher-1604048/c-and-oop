#include<iostream>
using namespace std;
int main(){
    int *p;

    p=new int;
    if(!p){
        cout<<"allocation error"<<endl;
        return 1;
    }

    *p = 1000;
    cout<<"the vslue of p"<<*p<<endl;
     cout<<"the address of p"<<p<<endl;

     delete(p);
return 0;
}
