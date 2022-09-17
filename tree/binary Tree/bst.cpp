#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value)
    {
        this->val = value;
        this->left = NULL;
        this->right = NULL;
    }
};
void createTree(TreeNode *&root, int value)
{
    TreeNode *noot = new TreeNode(value);
    if (root == NULL)
    {
        root = noot;
        return;
    }
    if (root->val > noot->val)
    {
        createTree(root->left, value);
    }
    else
    {
        createTree(root->right, value);
    }
}
void printLevel(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *top = q.front();
        cout << top->val << " ";
        q.pop();
        if (top->left != NULL)
            q.push(top->left);
        if (top->right != NULL)
            q.push(top->right);
    }
};
int main()
{
    int n;
    cin >> n;
    TreeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        createTree(root, v);
    }
    printLevel(root);
}