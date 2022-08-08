#include <bits/stdc++.h>

using namespace std;

class linkedList
{

public:
    int value;
    linkedList *next;

    linkedList(int vel)
    {
        value = vel;
        next = NULL;
    };
};
void insertAtTail(linkedList *&node, int value)
{
    linkedList *newNode = new linkedList(value);
    if (node == NULL)
    {
        node = newNode;
        return; 
    }
    linkedList *temp = node;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};
void display(linkedList *node)
{
    while (node != NULL)
    {
        cout << node->value << " ";
        node = node->next;
        cout << endl;
    }
}
int main()
{
    linkedList *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 9);
    display(head);
}