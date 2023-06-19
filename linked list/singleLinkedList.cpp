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

//searching an element present in linked list

bool searching(node* &head,int val) {
    node* temp = head;
    while(temp!=NULL) {
        if(temp->data == val)
            return true;
        temp=temp->next;
    }
    return false;
}

//deletion at head

void deleteAtHead(node* &head) {
    node* toDelete = head;
    head = head->next;
    delete toDelete; // delete the element node is a must
}

// deletion of nth element

void deletion(node* &head, int val) {

    if(head == NULL) {
        return;
    }
    if(head->next == NULL || val == head->data) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data!=val)    
        temp=temp->next;
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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
    int val ;
    cout << "\nEnter an element to be searched : ";
    cin >> val;
    if(searching(head,val))
        cout << "Element found.\n";
    else cout << "Element not found.\n";
    val=0;
    cout << "\nEnter element to be deleted from list : ";
    cin >> val;
    deletion(head,val);
    cout << "\nLinked list after deletion of " << val << " : " << endl;
    display(head);
    deleteAtHead(head);
    cout << "\nList after deletion of head element : " << endl;
    display(head);
    return 0;
}