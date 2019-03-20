int isAVL (BSTree t)
{
	if(t==NULL) { 
		return 0; 
	}
	if(t->left == NULL && t->right == NULL){
		return 0;
	}
 
	int hl = isAVL(t->left); 
	int hr = isAVL(t->right); 
 
	// One of the subtrees is not height balanced, so return -1
	if(hl < 0 || hr < 0){
		return -1;
	}
 
	int diff = hl - hr;
	// absolute diff is more than one, so not height balanced
	if(diff < -1 || diff > 1) {
		return -1;
	}
 
	// so far the tree is height balanced
	// return hight
	if( hl > hr ) { return hl + 1; }
	else { return  hr + 1; }
 
}
Assignment-1 is now available. Please care