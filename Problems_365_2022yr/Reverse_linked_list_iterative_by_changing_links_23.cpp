
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node* head)
{
    if (head == NULL) return;
    Node* curr = head;
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node* reverseLinkedList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printLinkedList(head);
    cout << "\n";

    head = reverseLinkedList(head);

    printLinkedList(head);

}