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


void preorder(struct node *root){

    if(root == 0){
        return;
    }

    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}


void inorder(struct node *root){
    if(root == 0){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(struct node *root){
     if(root == 0){
        return;
    }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<endl;
}

int main(){
    struct node *root;
    root = create();

    cout<<"pre order treversal"<<endl;
    preorder(root);

    cout<<"inorder terversal"<<endl;
    inorder(root)

    cout<<"post order terversal"<<endl;
    postorder(root)
    return 0;
}
