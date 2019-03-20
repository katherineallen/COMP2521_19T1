#include <stdlib.c>
#include <stdio.c>

typedef struct BSTNode *BSTree;
 
BSTree newBSTree();               // create an empty BSTree
void dropBSTree(BSTree);          // free memory associated with BSTree
void showBSTree(BSTree);          // display a BSTree
void showBSTreeNode(BSTree);      // display BSTree root node
 
void BSTreeInfix(BSTree);         // print values in infix order
void BSTreePrefix(BSTree);        // print values in prefix order
void BSTreePostfix(BSTree);       // print values in postfix order
void BSTreeLevelOrder(BSTree);    // print values in level-order
 
int BSTreeDepth(BSTree);          // #nodes in longest branch
int BSTreeNumNodes(BSTree);       // count #nodes in BSTree
int BSTreeNumLeaves(BSTree);      // count #leaves in BSTree
 
BSTree BSTreeInsert(BSTree, int); // insert a new value into a BSTree
int BSTreeFind(BSTree, int);      // check whether a value is in a BSTree
BSTree BSTreeDelete(BSTree, int); // delete a value from a BSTree

typedef struct BSTNode *Link;
 
typedef struct BSTNode {
   int  value;
   Link left, right;
} BSTNode;

void BSTreeInfix(BSTree t) {
   if (t != NULL) {
      BSTreeInfix(t->left);
      printf("%d\n", t->value);
      BSTreeInfix(t->right);
   }
}


int BSTreeSearch(BSTree t, int i){

}

int countInternal(BSTree t) { 
   if (t == NULL) {
      return 0;
   }

   if ( t->left != NULL && t->right != NULL) {
      return 1 + countInternal(t->left) + countInternal(t->right);
   } else {
      return countInternal(t->left) + countInternal(t->right);
   }

}

int BSTreeMaxBranchLen(BSTree t) {

}

int nodeDepth(BSTree t, int key) {
   return myNodeDepth(t, key) -1;
}


int myNodeDepth(BSTree t, int key) {
   if (t == NULL) {
      return -1;
   }

   if (t->value == key) {
      return 1;
   } else if (t->value < key) {
      if (nodeDepth(t->right, key) == -1) {
         return -1;
      }
      return 1 + nodeDepth(t->right, key);
   } else {
      if (nodeDepth(t->left,key) == -1) {
         return -1;
      }
      return 1 + nodeDepth(t->left, key);
   }


}

int BSTWidth(BSTree t) { 
   if (t == NULL) {
      return 0;
   }
   return 3 + BSTWidth(t->left) + BSTWidth(t->right);

}

int BSTreeNumNodes(BSTree t) {

}

int main (int argc, char * argv[]){

    return EXIT_SUCCESS;

}





