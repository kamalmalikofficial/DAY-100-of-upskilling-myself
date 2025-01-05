#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
void travelinlinkedlist(node* node){
    while(node!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL"<<endl;
 
}



int main(){
    node* head = new node();
    node*first = new node();
    node*second = new node();
    node*third = new node();
    node*fourth = new node();

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







    return 0;
}