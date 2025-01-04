#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



int main(){
    node* head   = new node();
    node* second = new node();
    node* third  = new node();

    head->data = 1;
    head->next = second;

    second-> data = 2;
    second -> next = third;

    third-> data = 3;
    third-> next = NULL;

    

    cout<<"data value "<<third->data<<endl ;
    return 0;
}