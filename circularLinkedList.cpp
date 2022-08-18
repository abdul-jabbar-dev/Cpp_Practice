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
void createNodeAtHead(circularNode *&node, int value)
{
    circularNode *newNode = new circularNode(value);
    if (node == NULL)
    {
        node = newNode;
        newNode->next = newNode;
        return;
    }

    newNode->next = node;
    circularNode *temp = node;
    do
    {
        temp = temp->next;
    } while (temp->next != node);
    temp->next = newNode;
    node = newNode;
    // newNode->next = node;
    // circularNode *temp = node;
    // do
    // {
    //     temp = temp->next;
    // } while (temp != node);
    // temp->next = newNode;
    // node = newNode;
}
void createANode(circularNode *&node, int value)
{
    circularNode *newNode = new circularNode(value);

    circularNode *temp = node;
    if (node == NULL)
    {
        node = newNode;
        newNode->next = node;
        cout << "new node created" << endl;
        return;
    }
    while (temp->next != node)
    {

        temp = temp->next;
    }
    newNode->next = node;
    temp->next = newNode;
}
void printLinkedList(circularNode *node)
{
    circularNode *temp = node;
    if (node == NULL)
    {
        cout << "This list in empty";
        return;
    }

    do
    {
        cout << temp->value << " ";
        temp = temp->next;
    } while (temp != node);
}
int main()
{
    circularNode *head = NULL;
    // createANode(head, 8);
    createANode(head, 4);
    // createANode(head, 6);

    // createANode(head, 7);
    printLinkedList(head);
}