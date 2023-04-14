#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char *p;
     p = new char;

     if(!p){
        cout<<"allocation error"<<endl;
     }

     strcpy(p,"this is a string");

     cout<<"the value of p: "<<p<<endl;
     cout<<"the value of *p: "<<* p<<endl;

     delete p;
     cout<<"the value of p: "<<p<<endl;

return 0;
}
