#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int deta;
    Tree *right;
    Tree *left;
    Tree(int value)
    {
        deta = value;
        right = NULL;
        left = NULL;
    }
};
void spacePrint(int level);
void printTree(Tree *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->deta << endl;
    }
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->deta << endl;
    }

    if (root->left != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->left, level + 1);
    }

    if (root->right != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->right, level + 1);
    }
}
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}
int main()
{
    int n;
    cin >> n;
    Tree *allnode[n];
    for (int i = 0; i < n; i++)
    {
        allnode[i] = new Tree(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allnode[i]->deta = value;
        if (left != -1)
        {
            allnode[i]->left = allnode[left];
        }
        if (right != -1)
        {
            allnode[i]->right = allnode[right];
        }
    }
    printTree(allnode[0], 0);
}

/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/