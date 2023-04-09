#include<iostream>
using namespace std;

class samp{
    int i,j;
public:
    void setij(int x,int y){
        i=x;
        j=y;
    }
    int getij(){
        return i*j;
    }
};
int main(){

    samp *p;

    p = new samp;
    if(!p){
        cout<<"allocation error"<<endl;
        return 0;
    }

    p->setij(3,6);
    cout<<"product is:"<<p->getij()<<endl;
return 0;
}
