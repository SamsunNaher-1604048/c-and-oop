#include<iostream>
using namespace std;
class myclass{
    int a,b;
public:
    void set(int i,int j){a=i;b=j;}
    void show(){cout<<a<<b;}
};
int main(){
    myclass o1,o2;
    o1.set(10,8);
    o2=o1; //assign of operator
    o2.show();
    o1.show();

return 0;

}
