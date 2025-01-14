#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;

};
void travellist(node* head){
    while( head!=NULL ){
        cout<< head->data<<"-";
        head=head->next;
    }
    cout<<endl;

}

void deletenode(node* head,int key){
        node* temp = head;
        node* prev = nullptr;

        if (temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Node with value ";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }



int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head-> data = 0;
    head -> next = second;

    second -> data = 1;
    second -> next  = third;

    third -> data = 2;
    third ->  next = NULL;

    travellist(head);
    deletenode(head, 1);

    travellist(head);
    

    return 0;
}
