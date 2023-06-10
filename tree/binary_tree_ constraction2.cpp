#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(){
    struct node *newnode;
    int x;
    newnode =(struct node*)malloc(sizeof(struct node));
    cout<<"enter data"<<endl;
    cin>>x;

    if(x==-1){
        return 0;
    }else{
        newnode->data = x;
    }

    cout<<"enter the left child"<<x<<endl;
    newnode->left = create();

    cout<<"enter the right child"<<x<<endl;
    newnode->right = create();

    return newnode;
};

int main(){
    struct node *root;
    root = create();
    return 0;
}
