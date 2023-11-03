#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int ele)
    {
        this->data = ele;
        this->next = NULL;
    }
};

void insertAtStart(Node *&head, Node *&tail, int data)
{

    Node *ptr = new Node(data);
    // Edge case ...When no elements are there in the linked list.
    if (head == NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {

        ptr->next = head;
        head = ptr;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    Node *ptr = new Node(data);
    // Edge Case...
    if (tail == NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {

        tail->next = ptr;
        tail = ptr;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    if (position == 1)
    {
        insertAtStart(head, tail, data);
        return;
    }

    Node *temp = head;
    Node *ptr = new Node(data);
    int count = 1;
    while (count < position - 1)
    {
        count++;
        temp = temp->next;
    }
    // If the position is the last position...
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;

    insertAtStart(head, tail, 10);
    insertAtTail(head, tail, 50);
    insertAtStart(head, tail, 20);
    insertAtTail(head, tail, 60);
    insertAtStart(head, tail, 30);
    insertAtPosition(head, tail, 6, 232);
    insertAtTail(head, tail, 4);
    display(head);

    return 0;
}