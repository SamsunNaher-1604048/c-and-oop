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
    newnode =(struct node*) malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if(font ==0){
        font=rear=newnode;
        rear->next = font;

    }else{
        rear->next =newnode;
        rear = newnode;
        rear->next = font;
    }

    cout<<"the insert value in queue is"<<rear->data<<endl;
}

void dequeue(){
    struct node *temp;
    temp = font;

    if(font ==0&& rear==0){
        cout<<"queue is empty"<<endl;
    }
    else if(font==rear){
        cout<<"the delete value in queue is"<<temp->data<<endl;
        font = rear =0;
        free(temp);
    }
    else{
        cout<<"the delete value in queue is"<<temp->data<<endl;
        font = font->next;
        rear->next =font;
        free(temp);
    }
}

void display(){
     struct node *temp;
     temp = font;

     if(font==0 && rear ==0){
        cout<<"queue is enpty"<<endl;
     }else{
         while(temp->next != font){
            cout<<"value of queue"<<temp->data<<endl;
            temp = temp->next;
         }
        cout<<"value of queue"<<temp->data<<endl;
     }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    display();


return 0;
}
