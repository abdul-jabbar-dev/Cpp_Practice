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
    Node *addVel = new Node(name);
    if (node == NULL)
    {
        node = addVel;
        return;
    }
    Node *temp = node;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = addVel;
}
void unShiftList(Node *&node, string name)
{
    Node *addVel = new Node(name);
    addVel->next = node;
    node = addVel;
}
void printLinkedList(Node *node)
{
    while (node != NULL)
    {
        cout << node->name << " ";
        node = node->next;
    }
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
