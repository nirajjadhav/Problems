
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
    stack<Node*> s;

    Node* curr = head;
    while(curr != NULL)
    {
        s.push(curr);
        curr = curr->next;
    }
    head = s.top();
    s.pop();
    curr = head;
    while(!s.empty())
    {
        curr->next  = s.top();
        //cout << node->data << " ";
        s.pop();
        curr = curr->next;
        if(s.size() == 0)
        {
            curr->next = NULL;
        }
    }
    return head;

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