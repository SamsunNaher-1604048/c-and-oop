#include<iostream>
using namespace std;

//#define N 5;
int dequeue[5];
int font=-1,rear=-1;

void enqueuefont(int x){
    if((font == 0 && rear == 4)|| font == rear + 1){
        cout<<"the queue is full";
    }
    else if(font==-1 && rear ==-1){
        font = rear =0;
        dequeue[font] = x;
        cout<<"the insert value from font: "<<x<<endl;
    }
    else if(font==0){
        font = 4;
        dequeue[font]=x;
        cout<<"the insert value from font: "<<x<<endl;
    }
    else{
        font-- ;
        dequeue[font]=x;
        cout<<"the insert value from font: "<<x<<endl;
    }
}

void enqueuerear(int x){
    if((font == 0 && rear == 4)|| font == rear + 1){
        cout<<"the queue is full";
    }
    else if(font==-1 && rear ==-1){
        font=rear=0;
        dequeue[rear] = x;
        cout<<"the insert value from rear: "<<x<<endl;
    }
    else if(rear == 4){
        rear = 0;
        dequeue[rear]=x;
        cout<<"the insert value from rear: "<<x<<endl;
    }
    else{
        rear++;
        dequeue[rear]=x;
        cout<<"the insert value from rear: "<<x<<endl;
    }
}

void display(){
    int i;
    for(i=font;i!=rear;i=(i+1)%5){
        cout<<"display: "<<dequeue[i]<<endl;
    }
    cout<<"display: "<<dequeue[rear]<<endl;
}

void dequeuefont(){
    if(font==-1 && rear ==-1){
        cout<<"the queue is empty"<<endl;
    }
    else if(font==rear){
        cout<<"the delete value from font"<<dequeue[font]<<endl;
        font = rear =-1;
    }
    else if(font == 4){
         cout<<"the delete value from font"<<dequeue[font]<<endl;
         font = 0;
    }
    else{
      cout<<"the delete value from font"<<dequeue[font]<<endl;
      font++;
    }
}

void dequeurear(){
    if(font==-1 && rear ==-1){
        cout<<"the queue is empty"<<endl;
    }
    else if(font==rear){
        cout<<"the delete value from rear"<<dequeue[rear]<<endl;
        font = rear =-1;
    }
    else if(rear==0){
         cout<<"the delete value from rear"<<dequeue[rear]<<endl;
         rear = 4;
    }
    else{
        cout<<"the delete value from rear"<<dequeue[rear]<<endl;
        rear --;
    }
}


int main(){
    enqueuefont(8);
    enqueuefont(0);
    enqueuerear(1);
    enqueuerear(2);
    enqueuefont(3);
    display();
    dequeuefont();
    dequeurear();
    display();
return 0;
}
