#include<iostream>
using namespace std;

class myclass{
    int x;
public:
    myclass(){
        x=0;
    }
    myclass(int n){
        x=n;
    }
    int getx(){
        return x;
    }
    int setx(int n){
        x = n;
    }
};
int main(){
    int i;
    myclass *p;
    myclass ob(10);
    p = new myclass[10];
    if(!p){
        cout<<"allocation error";
        return 1;
    }
    for(i = 0 ;i<10;i++){
        p[i] = ob;
    }
    for( i=0;i<10;i++){
        cout<<p[i].getx()<<endl;
    }

return 0;
}
