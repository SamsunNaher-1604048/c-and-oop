#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp;

void add_data(int new_data){
  struct node *new_node =(struct node*)malloc(sizeof(struct node));
   new_node->data = new_data;

   if(head==NULL){
     new_node->next = head;
     head = new_node;
     temp = new_node;
   }
   else{
        temp->next = new_node;
        temp = new_node;
   }
};

int main() {

    int i,data,n;
    cout<<"enter the size of linklist";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>data;
       add_data(data);
    }
    cout<<"successfully add";
    temp=head;

    for(i=0;i<n;i++){
        cout<< temp->data<<endl;
        temp = temp->next;
    }
    cout<<"end of link list";

  return 0;
}
