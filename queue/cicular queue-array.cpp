#include<iostream>
using namespace std;

int que[5];
int fnt =-1;
int rear =-1;

void enqueue(int x){
   if(fnt==-1&&rear==-1){
    fnt=rear=0;
    que[rear] = x;
    cout<<"the enrqeue value"<<que[rear]<<endl;
   }
   else if((rear+1)%5 == fnt){
    cout<<"the queue is full"<<endl;
   }
   else{
        rear = (rear+1)%5;
        que[rear]=x;
        cout<<"the enrqeue value"<<que[rear]<<endl;
   }
}

void dequeue(){
    if(fnt==-1&&rear==-1){
        cout<<"the queue is empty"<<endl;
    }
    else if(rear == fnt){
        cout<<"the dequeue elenent: "<<que[fnt]<<endl;
        fnt=rear=-1;
    }
    else{
        cout<<"the dequeue elenent: "<<fnt<<endl;
        fnt = (fnt+1)%5;
    }
}


void display(){
    if(fnt==-1&&rear==-1){
        cout<<"queue is empty";
    }else{
        int i = fnt;
        while(i!=rear){
            cout<<"the element of queue"<<que[i]<<endl;
            i=(i+1)%5;
        }
        cout<<"the element of queue"<<que[rear]<<endl;
    }
}



int main(){

 enqueue(1);
 enqueue(0);
 enqueue(-1);
 enqueue(8);
 enqueue(5);
 dequeue();
 enqueue(0);
 enqueue(-1);
 display();

 return 0;
}
