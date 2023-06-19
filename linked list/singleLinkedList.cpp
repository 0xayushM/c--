#include<iostream>
using namespace std;

//structure of linked list
class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

// insertion at tail of the linked list

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

//insertion at head

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head=n;
}

void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    for(int i=1;i<=5;i++) {
        insertAtTail(head,i);
    }
    cout << "Linked list after insertion at tail : " << endl;
    display(head);

    cout << "\nLinked list after insertion at head : " << endl;
    insertAtHead(head,6);
    display(head);
    return 0;
}