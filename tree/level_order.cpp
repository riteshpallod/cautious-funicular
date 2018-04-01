#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};


struct node* new_node(int data)
{
    struct node* naya = (struct node*)malloc(sizeof(struct node));
    naya->data = data;
    naya->left = NULL;
    naya->right = NULL;

    return naya;
}

void inorder(struct node *root)
{
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << ", ";
    inorder(root->right);
}

int height(struct node *root)
{
    if (root == NULL) return 0;

    int left_tree_height = height(root->left);
    int right_tree_height = height(root->right);

    return max(left_tree_height, right_tree_height)+1;
}

void printLevel(struct node *root, int level)
{
    if (root == NULL) return;
    if (level == 1)
        cout << root->data << ", ";
    else
    {
        printLevel(root->left, level-1);
        printLevel(root->right, level-1);
    }
}

void levelOrder(struct node *root)
{
    int tree_height = height(root);
    for (int i = 1; i < tree_height+1; i++)
    {    
        printLevel(root, i);
        cout << endl;
    }
}


int main()
{
    struct node *root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);   
    inorder(root);
    cout << endl;
    cout << height(root) << endl;
    levelOrder(root);

    return 0;
}