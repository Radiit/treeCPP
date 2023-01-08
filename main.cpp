#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    cout << "=========================================================================="<<endl;
    adrNode root = NULL;
    int x[9] = {5,3,9,10,4,7,1,8,6};

    for(int i = 0; i < 9; i++){
        cout << x[i] << " ";
    }

    for(int i=0; i<9; i++){
       adrNode nodeBaru = newNode_1301213292(x[i]);
       insertNode_1301213292(root, nodeBaru);
    }

    cout <<"\n\nPre Order\t\t: ";
    printPreOrder_1301213292(root);

    cout <<"\nDescendent of Node 9\t: ";
    printDescendant_1301213292(root, 9);

    cout <<"\n\nSum of BST Info\t\t: " << sumNode_1301213292(root)<<endl;

    cout <<"\nNumber of Leaves\t: " << countLeaves_1301213292(root)<<endl;

    cout <<"\nHeight of Tree\t\t: "<< heightTree_1301213292(root)<<endl;

    cout<< "==========================================================================";
    return 0;
}
