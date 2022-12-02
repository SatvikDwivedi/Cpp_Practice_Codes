#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    struct node *left, *right;
    int data;
};

struct node *createtree(int n)
{
    struct node *tree = (struct node *)malloc(sizeof(struct node));
    tree->data = n;
    tree->left = NULL;
    tree->right = NULL;
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct node *root = createtree(1);
    root->left = createtree(2);
    root->right = createtree(3);
    root->left->left = createtree(4);
    root->left->right = createtree(5);
    root->right->left = createtree(6);
    root->right->right = createtree(7);
    // preorder(root);
    // inorder(root);
    postorder(root);
}