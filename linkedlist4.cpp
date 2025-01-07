#include<iostream>
using namespace std;
 
 struct node{
    int data;
    node*next;
 };
void travelinlinkedlist(node*node){
    while(node->next!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }  
}
node* fourth = nullptr;

void insertinlast( int data1){
     struct node* templast = new node();
     templast -> data = data1;
     fourth->next = templast;
     templast->next= NULL;


}

int main(){
    node*head = new node();
    node*first = new node();
    node*second = new node();
    node*third = new node();
    fourth = new node();

    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;
    travelinlinkedlist(head);
    cout<<endl;

    // now insert  in the begining
    insertinlast(5);
    travelinlinkedlist(head);
    
    return 0;
}