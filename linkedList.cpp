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
struct findArrayAsReturn
{
    int returnArr[999];
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
int count(linkedList *node)
{
    linkedList *temp = node;
    int i = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    return i;
}
void display(linkedList *node)
{
    while (node != NULL)
    {
        cout << node->value << " ";
        node = node->next;
        cout << endl;
    }
}
void insertAtPosition(linkedList *&node, int value, int position)
{
    int index = 1;
    linkedList *temp = node;
    while (position != index)
    {
        temp = temp->next;
        index++;
    }
    linkedList *newNode = new linkedList(value);

    newNode->next = temp->next;
    temp->next = newNode;
};
int findItemUniq(linkedList *&node, int valuee)
{
    int index = 1;
    linkedList *temp = node;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->value != valuee)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        index++;
    }
    return index;
}
void insertAfterValueInUniq(linkedList *&node, int value, int positionValue)
{
    int position = findItemUniq(node, positionValue);
    insertAtPosition(node, value, position);

    // linkedList *newNode = new linkedList(value);
    // linkedList *temp = node;
    // while (temp != NULL)
    // {
    //     if (temp->value == positionValue)
    //     {
    //         newNode->next = temp->next;
    //         temp->next = newNode;
    //         return;
    //     }
    //     temp = temp->next;
    // }
}
void findItemDuplicate(linkedList *&node, int valuee)
{
    int index = 1;
    linkedList *temp = node;
    int flag = 0;
    int get = 0;
    if (temp == NULL)
    {
        cout << "Not elements here";
        return;
    }
    while (flag != 1)
    {
        if (temp->next == NULL)
            flag = 1;

        if (temp->value == valuee)
        {
            cout << "Index: " << index << " Value: " << temp->value << endl;
            get = 1;
        }
        index++;
        temp = temp->next;
    }
    if (get == 0)
        cout << "Not Found";
}
findArrayAsReturn findItemDuplicateReturn(linkedList *&node, int valuee)
{
    findArrayAsReturn retArr;
    linkedList *temp = node;
    int index = 0;
    int i = 1;
    while (temp != NULL)
    {
        if (temp->value == valuee)
        {
            retArr.returnArr[i] = index;
            i++;
        }
        index++;
        temp = temp->next;
    }
    if (i == 1)
        retArr.returnArr[0] = 0;
    else
        retArr.returnArr[0] = i;
    return retArr;
};
int main()
{
    linkedList *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 6);
    // insertAtTail(head, 6);
    // insertAtTail(head, 6);
    // insertAfterValueInUniq(head, 5, 3);
    // findArrayAsReturn t;
    // t = findItemDuplicateReturn(head, 5);

    // int cou = count(head);
    // findItemDuplicate(head, 0);
    // cout << findItemUniq(head, 6);
    display(head);
}