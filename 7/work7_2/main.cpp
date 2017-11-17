#include <iostream>
#include "avl.h"
using namespace std;

/*enum {reference = 0, addNode, removeNode, findValue, print, printIncreasing, printDecreasing};

void comandAdd (AVLTree *tree)
{
    int value = 0;

    cout << "Enter added value: ";
    cin >> value;

    add(tree, value);
    cout << endl;
}

void comandRemove(AVLTree *tree)
{
    int value = 0;

    cout << "Enter removed value: ";
    cin >> value;

    remove(tree, value);
    cout << endl;
}

void comandFind (AVLTree *tree)
{
    int value = 0;

    cout << "Enter found value: ";
    cin >> value;

    if (contains(tree, value))
        cout << "Is found" << endl;
    else
        cout << "Isn't found" << endl;
}

void comandPrintIncreasing(AVLTree *tree)
{
    cout << "Value in increasing order: ";

    printUp(tree);

    cout << endl;
}

void comandPrintDecreasing(AVLTree *tree)
{
    cout << "Value in decreasing order: ";

    printDown(tree);

    cout << endl;
}

void comandPrint(AVLTree *tree)
{
    cout << "Value in (a b c) format: ";

    printTree(tree);

    cout << endl;
}

void help()
{
    cout << "0 - help" << endl;
    cout << "1 - add node" << endl;
    cout << "2 - remove node" << endl;
    cout << "3 - find value;" << endl;
    cout << "4 - print in (a b c) format" << endl;
    cout << "5 - print in increasing order;" << endl;
    cout << "6 - print in decreasing order;" << endl;
    cout << "7 - exit" << endl << endl;
}

int main()
{
    AVLTree *tree = createTree();

    help();

    bool exit = true;
    int comand = - 1;

    while (exit)
    {
        cout << "Enter comand: ";
        cin >> comand;

        switch (comand)
        {
            case reference :
            {
                help();
                break;
            }
            case addNode:
            {
                comandAdd(tree);
                break;
            }
            case removeNode:
            {
                comandRemove(tree);
                break;
            }
            case findValue:
            {
                comandFind(tree);
                break;
            }
            case print:
            {
                comandPrint(tree);
                break;
            }
            case printIncreasing:
            {
                comandPrintIncreasing(tree);
                break;
            }
            case printDecreasing:
            {
                comandPrintDecreasing(tree);
            }
            default:
            {
                if (comand == 7)
                    exit = false;
                else
                    cout << "Unknow comand" << endl;
            }
        }

    }

    clearTree(tree);

}
 */

int main()
{
    AVLTree *tree = createTree();
    add(tree, 1);
    add(tree, 2);
    add(tree, 3);
    add(tree, 4);
    add(tree, 5);
    add(tree, 6);
    add(tree, 7);
    add(tree, 8);
    add(tree, 9);
    add(tree, 10);
    add(tree, 14);
    add(tree, 12);
    add(tree, 11);
    add(tree, 13);

    remove(tree, 12);
    remove(tree, 10);
    printTree(tree);
    cout << endl;
    remove(tree, 11);
    printTree(tree);
    cout << endl;
    remove(tree, 13);
    printTree(tree);
    cout << endl;
    remove(tree, 9);
    printTree(tree);

}
