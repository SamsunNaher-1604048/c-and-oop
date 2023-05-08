#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(){
    struct node *newnode;
    newnode = new struct node;
    int x;

    if(!newnode){
        cout<<"allocation error"<<endl;
        return 0;
    }

    cout<<"place inter the data(for entering no data press  -0)"<<endl;
    cin>>x;

    if(x==-0){
        return 0;
    }
    else{
        newnode->data = x;
        cout<<"place inter the left child"<<endl;
        newnode->left = create();

        cout<<"place inter the right child"<<endl;
        newnode->right = create();

        return newnode;
    }
};

int main(){

    struct node *root;
    root = create();
    cout<<root;

return 0;
}
