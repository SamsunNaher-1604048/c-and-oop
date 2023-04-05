#include<iostream>
using namespace std;


int qu [5];
int fnt= -1;
int rear = -1;

void enqueue(int x){
    if(rear == 4){
        cout<<"queue is overflow"<<endl;
    }
    else if(rear==-1 && fnt==-1){
        fnt=rear=0;
        qu[rear]=x;
    }
    else{
        rear++;
        qu[rear]=x;
    }
}

void dequeue(){
    if(fnt==-1&&rear==-1){
        cout<<"queuq is empty"<<endl;
    }
    else if(fnt==rear){
        fnt=rear=-1;
    }
    else{
        cout<<"dequeue elenent"<<qu[fnt]<<endl;
        fnt++;
    }
}

void display(){
    int i;
    if(fnt==-1&&rear==-1){
        cout<<"queuq is empty"<<endl;
    }
    else{
        for(i=fnt;i<=rear;i++){
            cout<<"the data is"<<qu[i]<<endl;
        }
    }
}

int peek(){
       if(fnt==-1&&rear==-1){
        cout<<"queuq is empty"<<endl;
    }else{
        cout<<"the peek value is"<<qu[fnt]<<endl;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(-1);
    dequeue();
    display();
    peek();
return 0;
}
