#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int value;
    Tree *left;
    Tree *right;
    Tree(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}
void printTree(Tree *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->value << endl;
    }
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->value << endl;
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

void inOrder(Tree *root, string &inorder)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left, inorder);
    inorder += to_string(root->value);
    inOrder(root->right, inorder);
}
void preOrder(Tree *root, string &preorder)
{
    if (root == NULL)
    {
        return;
    }
    preOrder(root->left, preorder);
    preorder += to_string(root->value);
    preOrder(root->right, preorder);
}
void postOrder(Tree *root, string &postorder)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left, postorder);
    postorder += to_string(root->value);
    postOrder(root->right, postorder);
}
void lavelOrder(Tree *root, string &postorder)
{
    queue<Tree *> tq;
    tq.push(root);
    tq.push(NULL);
    while (!tq.empty())
    {
        Tree *fr = tq.front();
        tq.pop();
        if (fr != NULL)
        {
            cout << fr->value << " ";
            if (fr->left != NULL)
            {
                tq.push(fr->left);
            }
            if (fr->right != NULL)
            {
                tq.push(fr->right);
            }
        }
        else
        {
            if (!tq.empty())
            {
                tq.push(NULL);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Tree *treeArr[n];
    for (int i = 0; i < n; i++)
    {
        treeArr[i] = new Tree(-1);
    }
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        treeArr[i]->value = value;
        if (left != -1)
        {
            treeArr[i]->left = treeArr[left];
        }
        if (right != -1)
        {
            treeArr[i]->right = treeArr[right];
        }
    }
    string chk = "";
    lavelOrder(treeArr[0], chk);
    cout << chk;
    // printTree(treeArr[0], 0);
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