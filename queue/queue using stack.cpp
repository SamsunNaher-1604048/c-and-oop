#include<iostream>
using namespace std;
int s1[5],s2[5];
int top1 =-1,top2 =-1;
int cont=0;

void push1(int data){
    if(top1==4){
        cout<<"the queue is full"<<endl;
    }else{
        top1++;
        s1[top1]=data;
        cout<<"successfully add"<<s1[top1]<<endl;
    }
}

void push2(int data){
    if(top2==4){
        cout<<"the queue is full"<<endl;
    }else{
        top2++;
        s1[top2]=data;
    }
}


int pop1(){
    int t=top1;
    top1=top1-1;
    cout<<t<<" "<<top1<<" "<<s1[t]<<endl;
    return  s1[t];
}

int pop2(){
    int t=top2;
    top2=top2-1;
    return s2[t];
}


void enqueue(int x){
    push1(x);
    cont++;
}

void dequeue(){
    int i=0,a,b;
    if(top1==-1 &&top2==-1){
        cout<<"the queue is empty"<<endl;
    }else{
        for(i=0;i<cont;i++){
            a=pop1();
            push2(a);
        }
        b = pop2();
        cout<<"the pop elememt is "<<b<<endl;
        cont=cont-1;

        for(i=0;i<cont;i++){
            b=pop2();
            cout<<"b"<<b<<endl;
            push1(b);
        }
    }
}


int main(){

    enqueue(5);
    enqueue(0);
    enqueue(1);
    dequeue();
    return 0;
}
