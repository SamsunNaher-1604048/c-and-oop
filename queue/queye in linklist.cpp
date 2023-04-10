#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *next;
};

struct node *font = 0;
struct node *rear = 0;

void enqueue(int x){
    struct node *newnode;
    newnode = new struct node;
     newnode->data = x;
     newnode->next = 0;

     if(font== 0 && rear==0){
            font=rear=newnode;
     }
     else{
         rear->next = newnode;
         rear = newnode;
     }
}

void display(){
    struct node *temp;
    if(font== 0 && rear==0){
        cout<<"list in empty"<<endl;
    }else{
        temp = font;
        while(temp!=0){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

void dequeue(){
    struct node *temp;
    temp = font;
    if(font ==0 && rear ==0){
         cout<<"list in empty"<<endl;
    }else{
        font=font->next;
        free(temp);
    }
}

int main(){
    enqueue(5);
    enqueue(0);
    enqueue(-1);
    display();
    dequeue();
    display();
    enqueue(5);
    display();

 return 0;
}
