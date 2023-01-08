#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

#define info(P) (P)->info
#define Lchild(P) (P) -> leftChild
#define Rchild(P) (P)-> rightChild

using namespace std;

typedef struct node *adrNode;
typedef int infotype;

struct node{
    infotype info;
    adrNode leftChild;
    adrNode rightChild;
};


adrNode newNode_1301213292(infotype x);
adrNode findNode_1301213292(adrNode root, infotype x);
void insertNode_1301213292(adrNode &root, adrNode p);
void printPreOrder_1301213292(adrNode root);
void printDescendant_1301213292(adrNode root, infotype x);
int sumNode_1301213292(adrNode root);
int countLeaves_1301213292(adrNode root);
int heightTree_1301213292(adrNode root);

#endif // TREE_H_INCLUDED
