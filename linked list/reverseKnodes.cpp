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

// insertion at tail of the linked list

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

node* reverse(node* &head,int k) {
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!= NULL && count<k) {
        nextptr=currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL) {
        head->next = reverse(nextptr,k);
    }
    return preptr;
}

int main()
{
    node *head = NULL;
    for (int i = 1; i <= 5; i++)
    {
        insertAtTail(head, i);
    }
    cout << "Linked list : " << endl;
    display(head);
    int k;
    cout << "By how much the list should be reversed (0 - 5): ";
    cin >> k;
    node *newHead = reverse(head,k);
    cout << "Reverse of the list : " << endl;
    display(newHead);

    return 0;
}
