#include<iostream>
using namespace std;

class samp{
    int a,b;
public:
    samp(int n,int m){
        a=n;
        b=m;
    }

    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};
int main(){

    samp ob[]={
        samp(1,2),samp(3,4),samp(5,6)
    };

    int i;
    samp *p;
    p=ob;

    for(i=2;i>=0;i--){
        cout<<p->get_a()<<endl;
        cout<<p->get_b()<<endl;
    }
return 0;
}
