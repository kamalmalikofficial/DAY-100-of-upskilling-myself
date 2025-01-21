#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;

};
void deleteNode(ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;   
}
void printlist(ListNode *node){
    while(node!=NULL){
        cout<<node->val<<" ";
        node=node->next;
    }
}

int main(){
    ListNode* head = new ListNode();
    head->val = 1;
    ListNode* second = new ListNode();
    head->next = second;
    second->val = 2;
    ListNode* third = new ListNode();
    second->next = third;
    third->val = 3;
    printlist(head);
    cout<<endl;

    deleteNode(second);
    printlist(head);
    
    return 0;
}