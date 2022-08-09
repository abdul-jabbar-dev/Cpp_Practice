#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    Node *next;
    Node(string name)
    {
        this->name = name;
        next = NULL;
    }
};
void pushList(Node *&node, string name)
{
    // create new node
    Node *newNode = new Node(name);
    // if base node is NULL replese null node to new node
    if (node == NULL)
    {
        node = newNode;
        return;
    }
    // find the last node and add new node
    Node *temp = node;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void unShiftList(Node *&node, string name)
{
    // create new node
    Node *newNode = new Node(name);
    // linked base node to new node
    newNode->next = node;
    // make newnode as a base node
    node = newNode;
}
void printLinkedList(Node *node)
{
    while (node != NULL)
    {
        cout << node->name;
        if (node->next != NULL)
        {
            cout << "->"
                 << " ";
        }

        node = node->next;
    }
    cout << endl;
}

int main()
{

    Node *fArr = NULL;
    int choise = 2;
    cout << "Choise 1 : push value" << endl
         << "Choise 2 : unshift value" << endl
         << "Choise 3 : Exit" << endl
         << endl;
    string name;
    while (choise == 1 || choise == 2)
    {

        cout << "Enter your Name: ";
        cin >> name;
        if (choise == 1)
            pushList(fArr, name);
        else if (choise == 2)
            unShiftList(fArr, name);
        cout << "Enter your choise: ";
        cin >> choise;
    }

    printLinkedList(fArr);
}
