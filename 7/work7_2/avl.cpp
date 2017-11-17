#include <iostream>
#include "avl.h"
using namespace std;

struct AVLNode
{
    int value;
    int height;
    AVLNode *left;
    AVLNode *right;
};

AVLTree *createTree()
{
    AVLTree *tree = new AVLTree;
    tree->root = nullptr;
    return tree;
}

void clearNode(AVLNode *node)
{
    if (node == nullptr)
        return;

    clearNode(node->left);
    clearNode(node->right);
    delete node;
}

void clearTree(AVLTree *tree)
{
    clearNode(tree->root);
    tree->root = nullptr;
}

bool containsNode(AVLNode *node, int value)
{
    if (node == nullptr)
        return false;

    if (node->value == value)
        return true;

    if (value < node->value)
        return containsNode(node->left, value);
    else
        return containsNode(node->right, value);
}

bool contains(AVLTree *tree, int value)
{
    return containsNode(tree->root, value);
}

AVLNode *createNode(int value)
{
    AVLNode *node = new AVLNode;
    node->value = value;
    node->height = 1;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

int height(AVLNode *node)
{
    return node ? node->height : 0;
}

int balanceFactor(AVLNode *node)
{
    if (node == nullptr)
        return 0;

    int a = height(node->right);
    int b = height(node->left);
    return height(node->right) - height(node->left);
}

void updateHeight(AVLNode *node)
{
    if (node != nullptr)
    {
        int heightLeft = height(node->left);
        int heightRight = height(node->right);
        node->height = max(heightLeft, heightRight) + 1;
    }

}

void rotateRight(AVLNode *&node)
{
    if (node == nullptr)
        return;

    AVLNode* newNode = node->left;
    node->left = newNode->right;
    newNode->right = node;

    updateHeight(node);
    updateHeight(newNode);
    node = newNode;
}

void rotateLeft(AVLNode *&node)
{
    if (node == nullptr)
        return;

    AVLNode* newNode = node->right;
    node->right = newNode->left;
    newNode->left = node;

    updateHeight(node);
    updateHeight(newNode);

    node = newNode;
}

void balance(AVLNode *&node)
{
    int c = balanceFactor(node);
    if (balanceFactor(node) == 2)
    {
        if (balanceFactor(node->right) < 0)
            rotateRight(node->right);
        rotateLeft(node);
        return;
    }
    if (balanceFactor(node) == -2)
    {
        if (balanceFactor(node->left) > 0)
            rotateLeft(node->left);
        rotateRight(node);
    }
}

bool addNode(AVLNode *&node, int value)
{
    if (node == nullptr)
    {
        node = createNode(value);
        return true;
    }

    if (node->value == value)
        return false;

    if (value < node->value)
        addNode(node->left, value);
    else
        addNode(node->right, value);

    updateHeight(node);
    if (abs(balanceFactor(node)) == 2)
        balance(node);
}

bool add(AVLTree *tree, int value)
{
    return addNode(tree->root, value);
}

AVLNode *findMax(AVLNode *node)
{
    while (node->right != nullptr)
        node = node->right;
    return node;
}

bool removeNode(AVLNode *&node, int value)
{
    if (node == nullptr)
        return false;

    if (node->value == value)
    {
        if (node->left == nullptr && node->right == nullptr)
        {
            delete node;
            node = nullptr;
        }
        else if (node->left == nullptr)
        {
            AVLNode *temp = node->right;
            delete node;
            node = temp;
            updateHeight(node);
            balance(node);
        }
        else if (node->right == nullptr)
        {
            AVLNode *temp = node->left;
            delete node;
            node = temp;
            updateHeight(node);
            balance(node);

        }
        else
        {
            AVLNode *maxNode = findMax(node->left);
            int maxValue = maxNode->value;
            removeNode(node, maxValue);
            node->value = maxValue;
            updateHeight(node);
            balance(node);
        }

        return true;
    }

    if (value < node->value)
        removeNode(node->left, value);
    else
        removeNode(node->right, value);

    updateHeight(node);
    if (abs(balanceFactor(node)) == 2)
        balance(node);
}

bool remove(AVLTree *tree, int value)
{
    return removeNode(tree->root, value);
}

void printUpNode(AVLNode *node)
{
    if (node == nullptr)
        return;

    printUpNode(node->left);
    cout << node->value << " ";
    printUpNode(node->right);
}

void printUp(AVLTree *tree)
{
    printUpNode(tree->root);
}

void printDownNode(AVLNode *node)
{
    if (node == nullptr)
        return;

    printDownNode(node->right);
    cout << node->value << " ";
    printDownNode(node->left);
}

void printDown(AVLTree *tree)
{
    printDownNode(tree->root);
}

void printTreeNode(AVLNode *node)
{
    if (node == nullptr)
    {
        cout << "null" << " ";
        return;
    }

    cout << "(" << " " << node->value << " ";
    printTreeNode(node->left);
    printTreeNode(node->right);
    cout << ")";
}

void printTree(AVLTree *tree)
{
    printTreeNode(tree->root);
}

