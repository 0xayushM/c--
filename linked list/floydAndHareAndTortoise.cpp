//detection and removal of cycle in linked list

#include <iostream>
using namespace std;

// structure of linked list
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// make a cycle

void makeCycle(node* &head,int pos) {
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL) {
        if(count == pos) {
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
}

// detection of cycle
bool detectCycle(node* &head) {
    node* slow = head;
    node* fast = head;
    if(head == NULL || head->next == NULL)
        return false;
    while(fast!=NULL && fast->next!=NULL) {
        slow=slow->next;
        fast=fast->next->next;
        if(fast == slow) {
            return true;
        }
    }
    return false;

}

// removing the cycle

void removeCycle(node* &head) {
    node* slow=head;
    node* fast=head;
    if(head == NULL || head->next == NULL)
        return;

    do {
        slow=slow->next;
        fast=fast->next->next;
    } while(slow!=fast && fast->next!=NULL && fast->next->next !=NULL);
    fast=head;
    while(slow->next!=fast->next) {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next = NULL;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}


void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 1; i <= 5; i++)
    {
        insertAtTail(head, i);
    }
    cout << "Linked list after insertion at tail : " << endl;
    display(head);
    if(detectCycle(head))
        cout << "\nCycle found."<<endl;
    else cout << "\nCycle not found."<<endl;
    int pos;
    cout << "\nEnter position in the list to make a cycle : " ;
    cin >> pos;
    makeCycle(head,pos);
    if(detectCycle(head)) 
        cout << "\nCycle found."<<endl;
    else cout << "\nCycle not found."<<endl;
    removeCycle(head);
    cout << "\nCycle removed." << endl;
    display(head);
    
    return 0;
}