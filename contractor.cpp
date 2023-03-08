#include <iostream>
using namespace std;

class myclass{
    int a,b;
    public:
        myclass(int x,int y);
        void show();

};
myclass::myclass(int x,int y){
    a=x;
    b=y;
}

void myclass::show(){
    cout<<a;
    cout<<b;
}


int main() {
    myclass obj(7,9);
    obj.show();
  return 0;
}
