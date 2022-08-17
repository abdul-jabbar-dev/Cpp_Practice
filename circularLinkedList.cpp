#include <bits/stdc++.h>
using namespace std;
class circularNode
{
public:
    int value;
    circularNode *next;
    circularNode(int value)
    {
        this->value = value;
        next = NULL;
    }
};
void createANode(circularNode *&node, int value)
{
    circularNode *newNode = new circularNode(value);

    circularNode *temp = node;
    circularNode *head = node;
  if (head == NULL)
    {
        node = newNode;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void printLinkedList(circularNode *node)
{
    circularNode *temp = node;
    while (temp->next != node)
    {
        cout << temp->next << " ";
        temp = temp->next;
    }
    if (temp->next != node)
    {
        cout << "->"
             << " ";
    }
}
int main()
{
    circularNode *head = NULL;
    createANode(head, 5);
    createANode(head, 6);
    createANode(head, 7);
    printLinkedList(head);
}