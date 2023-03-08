#include <iostream>
using namespace std;

#define Size 10

class stack{
    char stck[Size];
    int tos;
    char who;

public:
    stack(char a);
    void push (char ch);
    char pop();
};

stack::stack(char a){
    tos = 0;
    who = a;
    cout<< "name of stack"<<who<<endl;
}
void stack::push(char ch){
    if(tos==Size){
        cout<<'stack is full'<<who<<endl;
        return ;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop(){
    if(tos==0){
        cout<<"the stack is empty"<< who<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    stack s1('A'),s2('B');
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');

    s2.push('x');
    s2.push('y');
    s2.push('z');

    for(i=0;i<3;i++){
        cout<<"pop s1: "<<s1.pop()<<endl;
        cout<<"pop s2: "<<s2.pop()<<endl;
    }

    return 0;
}
