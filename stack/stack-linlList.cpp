#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *top =0;

void push(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link =top;
    top = newnode;

}

void display(){
    struct node * temp;
    temp = top;

    if(temp == 0){
        cout<<"stack is empty"<<endl;
    }
    else{
        while(temp !=0){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
}

void peek(){
    if(top ==0){
        cout<<"no value"<<endl;
    }
    else{
        cout<<"top element: "<<top->data<<endl;
    }
}

void pop(){
    struct node *temp;
    temp = top;

    if(temp == 0){
        cout<<"this stack is empty"<<endl;
    }
    else{
        cout<<"pop element"<<temp->data<<endl;
        top = temp->link;
        free(temp);
    }
}


int main(){
    push(2);
    push(3);
    push(4);
    display();
    peek();
    pop();
    peek();
    display();
 return 0;
}
