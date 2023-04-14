#include<iostream>
using namespace std;

class samp{
    int i,j;
public:
    void set_ij(int a, int b){
        i=a;
        j=b;
    }
    int get_pro(){
        return i*j;
    }
};
int main(){
    samp  *p;
    p = new samp[5];
    int i;

    if(!p){
        cout<<"allocation error"<<endl;
        return 0;
    }

    for(i=0;i<5;i++){
        p[i].set_ij(i,i);
    }

    for(i=0;i<5;i++){
        cout<<p[i].get_pro()<<endl;
    }

    delete []p;
return 0;
}
