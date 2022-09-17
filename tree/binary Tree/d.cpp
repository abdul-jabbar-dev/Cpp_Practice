#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

int second_minimum(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<Node *> q;
    q.push(root);
    int min = root->value;
    int secondMin = INT_MAX;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->value < min)
        {
            secondMin = min;
            min = temp->value;
        }
        else if (temp->value > min && temp->value < secondMin)
        {
            secondMin = temp->value;
        }
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
    if (secondMin == INT_MAX)
    {
        return -1;
    }
    return secondMin;
}

int main()
{
    int a;
    cin >> a;
    Node *root = new Node(a);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *thisRoot = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;
        Node *n1 = NULL;
        Node *n2 = NULL;
        if (x != -1)
            n1 = new Node(x);
        if (y != -1)
            n2 = new Node(y);
        thisRoot->left = n1;
        thisRoot->right = n2;

        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }

    int secon = second_minimum(root);
    cout << secon << "";
    return 0;
}
