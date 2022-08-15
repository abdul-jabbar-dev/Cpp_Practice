#include <bits/stdc++.h>
using namespace std;

class DoubleNode
{

public:
    int value;
    DoubleNode *prev;
    DoubleNode *next;
    DoubleNode(int value)
    {
        this->value = value;
        prev = NULL;
        next = NULL;
    };
};
void createNodeAtTail(DoubleNode *&head, int value)
{
    DoubleNode *newNode = new DoubleNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    DoubleNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
};
void displayNode(DoubleNode *&node)
{
    DoubleNode *temp = node;
    while (temp != NULL)
    {
        if (temp->prev == NULL)
            cout << "(Prev: NULL         ) <-";

        else
            cout << "(Prev: " << temp->prev << ") <-";

        cout << "Vel: " << temp->value << " -> ";

        if (temp->next == NULL)
            cout << "( NULL  Prev       )";
        else
            cout << "(" << temp->next << " next)" << endl;

        temp = temp->next;
    }
}

void displayReverseNode(DoubleNode *&node)
{
    DoubleNode *temp = node;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

void createNodeAtHead(DoubleNode *&head, int value)
{
    DoubleNode *newNode = new DoubleNode(value);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void createNodeInPosition(DoubleNode *&head, int value, int position)
{
    DoubleNode *newNode = new DoubleNode(value);
    DoubleNode *temp = head;
    int index = 0;
    while (index != position - 1)
    {
        temp = temp->next;
        index++;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}
int nodeCount(DoubleNode *&node)
{
    DoubleNode *temp = node;
    int index = 0;
    while (temp->next != NULL)
    {
        index++;
        temp = temp->next;
    }
    return index;
}

int main()
{
    DoubleNode *head = NULL;
    createNodeAtTail(head, 5);
    createNodeAtTail(head, 4);
    createNodeAtTail(head, 3);
    createNodeAtTail(head, 0);
    createNodeInPosition(head, 44, 2);
    // createNodeAtHead(head, 1);
    // int count = nodeCount(head);
    // cout << count;
    // displayReverseNode(head);
    displayNode(head);
}