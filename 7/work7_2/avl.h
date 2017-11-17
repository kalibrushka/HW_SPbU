#pragma once

struct AVLNode;

struct AVLTree
{
    AVLNode *root;
};

AVLTree *createTree();
void clearTree(AVLTree *tree);

bool contains(AVLTree *tree, int value);
bool add(AVLTree *tree, int value);
bool remove(AVLTree *tree, int value);

void printUp(AVLTree *tree);
void printDown(AVLTree *tree);
void printTree(AVLTree *tree);