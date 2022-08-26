#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int velue;
    Node *next;
    Node(int vel)
    {
        velue = vel;
        next = NULL;
    }
};

class STACK
{
protected:
    Node *front;
    Node *rear;

public:
    int count = 0;
    STACK()
    {
        front = NULL;
        rear = NULL;
    }
    void Push(int velue)
    {
        if (count != 0 && rear->next != NULL && front == rear)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        Node *newNode = new Node(velue);
        if (front == NULL)
        {
            front = rear = newNode;
            count++;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        count++;
        return;
    }

    int Pop()
    {
        int chk = -1;
        if (front == NULL)
        {
            return chk;
        }
        Node *deleteNode = front;

        front = front->next;
        chk = deleteNode->velue;
        delete deleteNode;
        if (count == 1)
            rear = front = NULL;
        count--;
        return chk;
    }
    int Front()
    {
        return (front != NULL) ? front->velue : -1;
    }
    int Back()
    {
        return (rear != NULL) ? rear->velue : -1;
    }
};