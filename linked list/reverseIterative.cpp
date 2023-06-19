#include <iostream>
using namespace std;

// structure of linked list
class node {
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// insertion at tail of the linked list

void insertAtTail(node *&head, int val) {
    node *n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// method-1: iterative

int main() {
    node *head = NULL;
    for (int i = 1; i <= 5; i++) {
        insertAtTail(head, i);
    }
    return 0;
}
