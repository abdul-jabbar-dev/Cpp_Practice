#include <bits/stdc++.h>
using namespace std;

class Tree
{

public:
    int value;
    Tree *left;
    Tree *right;
    Tree(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

// void print(Tree *&root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     print(root->left);
//     print(root->right);
//     cout << root->value;
// }
void print(Tree *&root)
{
    queue<Tree *> qt;
    qt.push(root);
    qt.push(NULL);
    while (!qt.empty())
    {

        if (qt.front() != NULL)
        {
            Tree *p = qt.front();
            cout << p->value << " ";
            qt.pop();
        }
        else
        {
            qt.pop();
        }
        if (root->left != NULL)
        {
            qt.push(root->left);
        }
        if (root->right != NULL)
        {
            qt.push(root->right);
        }
    }
}

int main()
{
    Tree *root = new Tree(1);
    Tree *a = new Tree(2);
    Tree *b = new Tree(2);
    Tree *c = new Tree(4);
    Tree *d = new Tree(3);
    Tree *e = new Tree(5);
    Tree *f = new Tree(6);

    root->left = a;
    root->right = d;

    a->left = c;
    a->right = e;

    print(root);
}