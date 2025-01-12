#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

};
void travellist(node * n){
    while(n!= NULL){
        cout<<n->data<<"-";
        n=n->next;
    }
    cout<<"NULL"<<endl;
 
}

void insertinfront(node*& h,int p){

    node*newnode = new node();
    newnode->data =p;
    newnode->next = h;

    h = newnode;
}

void insertinlast(node* h,int p){
    node* newnode = new node();
    newnode->data = p;
    newnode->next = NULL;

    node*last = h;
    while(last->next!=NULL){
        last=last ->next;
    }
    last ->next=newnode;

}
void insertbwnode(node* &h,int p){
    node* newnode = new node();
    newnode->data= p;
    newnode->next =h->next;
    h->next=newnode;
}
int main(){
    node*head = new node();
    node*second = new node();
    node*third = new node();

    head->data =1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    travellist(head);

    insertinfront(head,7);
    travellist(head);

    insertinlast(head,9);
    travellist(head);

    insertbwnode(second,5);
    travellist(head);

    
    return 0;
}