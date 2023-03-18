#include <iostream>
using namespace std;

int N=5;
int stack [5];
int top = -1;

void push(){
    int x;
    cout<<"enter the number that you add in stack"<<endl;;
    cin>>x;

    if(top == N-1){
        cout<< "the stack is full"<<endl;
    }else{
        top++;
        stack[top]=x;
    }

}

void pop(){
    int item;

    if(top==-1){
        cout<< "underflow cindition"<<endl;
    }
    else{
        item = stack[top];
         top--;
         cout<<"poped item"<<item<<endl;
    }
}

void peek(){
    if(top == -1){
        cout<<"this is underflow condition";
    }
    else{
        cout<<"the top most elenent"<<stack[top]<<endl;
    }
}

void display(){
    int i;

    for(i=top;i>=0;i--){
        cout<<"the elenent is"<<stack[i]<<endl;

    }
}



int main(){
    int i;
    for(i=0;i<N;i++){
          push();
    }
   pop();
   peek();
   display();
return 0;
}
