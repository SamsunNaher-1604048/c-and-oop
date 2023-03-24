#include<iostream>
using namespace std;

#define SIZE 10

class stack{
    char stck[SIZE];
    int tos;

public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack(){
    cout<<"constructing the stack"<<endl;
    tos =0;
}

void stack::push(char ch){
    if(tos == SIZE){
        cout<<"the stack is full"<<endl;
        return;
    }
    stck[tos]=ch;
    tos++;
}

char stack::pop(){
    if(tos == 0){
        cout<<"the stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack s1,s2;
    int i;
    s1.push('a');
    s1.push('b');
    s1.push('c');

    s2=s1; //clone s1

    cout<<"for S1";
    for(i=0;i<3;i++){
        cout<<s1.pop()<<endl;
    }

    cout<<"for s2";
    for(i=0;i<3;i++){
        cout<<s2.pop()<<endl;
    }

return 0;
}
