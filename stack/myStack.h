#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        value = val;
        prev = NULL;
        next = NULL;
    }
};
class myStack
{
    Node *head = NULL;
    Node *top = NULL;
    int count = 0;

public:
    // push
    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = top = newNode;
            this->count++;
            return;
        }
        if (head == top)
        {
            top->next = newNode;
            newNode->prev = head;
            top = newNode;
            this->count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = head;
            top = newNode;
            this->count++;
            return;
        }
    }
    // pop
    int pop()
    {
        int getValue;
        Node *deletedValue = top;
        if (head == NULL)
        {
            cout << "No element for pop" << endl;
            return -1;
        }
        getValue = deletedValue->value;
        if (head == top)
        {
            top = head = NULL;
            delete deletedValue;
            count--;
            return getValue;
        }

        Node *temp = head;
        while (temp->next != deletedValue)
        {
            temp = temp->next;
        }
        top = temp;
        temp->next = NULL;
        delete deletedValue;
        count--;
        return getValue;
    }
    // top value
    int topValue()
    {
        if (top == NULL)
        {
            cout << "No value founded" << endl;
            return -1;
        }
        return top->value;
    }
    // size
    int size()
    {
        return count;
    }
    //  empty
    bool isEmpty()
    {
        if (count == 0)
            return false;
        else
            return true;
    }
};
