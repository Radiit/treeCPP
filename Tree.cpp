#include "Tree.h"

adrNode newNode_1301213292(infotype x){
    adrNode p = new node;
    info(p) = x;
    Lchild(p) = NULL;
    Rchild(p) = NULL;
    return p;
}

adrNode findNode_1301213292(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else{
        if(info(root) == x){
            return root;
        }else if(x < info(root)){
            findNode_1301213292(Lchild(root), x);
        }else{
            findNode_1301213292(Rchild(root), x);
        }
    }
}

void insertNode_1301213292(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if(info(p) < info(root)){
            insertNode_1301213292(Lchild(root), p);
        }else if(info(p) > info(root)){
            insertNode_1301213292(Rchild(root), p);
        }else{
            cout << "Data sudah terdaftar" << endl;
        }
    }
}

void printPreOrder_1301213292(adrNode root){
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301213292(Lchild(root));
        printPreOrder_1301213292(Rchild(root));
    }
}

void printDescendant_1301213292(adrNode root, infotype x){
    adrNode target = findNode_1301213292(root, x);
    if(root == NULL){
        cout << "Tree kosong" << endl;
    }
    printPreOrder_1301213292(Lchild(target));
    printPreOrder_1301213292(Rchild(target));
}

int sumNode_1301213292(adrNode root){
    if(root == NULL){
        return 0;
    }
    return info(root) + sumNode_1301213292(Lchild(root)) + sumNode_1301213292(Rchild(root));
}

int countLeaves_1301213292(adrNode root){
    if(root == NULL){
        return 0;
    }
    if(Lchild(root) == NULL && Rchild(root) == NULL){
        return 1;
    }
    return countLeaves_1301213292(Lchild(root)) + countLeaves_1301213292(Rchild(root));
}

int heightTree_1301213292(adrNode root){
    if(root == NULL){
        return -1;
    }
    int kiri = heightTree_1301213292(Lchild(root));
    int kanan = heightTree_1301213292(Rchild(root));
    return max(kiri, kanan) + 1;
}
