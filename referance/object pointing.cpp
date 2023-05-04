#include<iostream>
using namespace std;

class number{
    int num ;
public:
    int set_num(int i);
    int get_num();
};

int number::set_num(int i){
    num = i;
};

int number::get_num(){
    return num;
};
int main(){
    number n;
    number *p;
    p = &n;
    p->set_num(8);
    cout<<p->get_num()<<endl;
return 0;
}
