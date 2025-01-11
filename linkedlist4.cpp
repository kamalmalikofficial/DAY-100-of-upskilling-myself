#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;

};
void printlist(node* h){
    while( h!=NULL ){
        cout<< h->data<<"-";
        h=h->next;
    }
}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head-> data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;

    printlist(head);

}