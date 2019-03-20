int printHeightDiff (BSTree t)
{
	if(t==NULL) { 
		printf(" diff: 0 \n"); 
		return 0; 
	}
	if(t->left == NULL && t->right == NULL){
		printf(" data: %d , diff: 0 \n", t->data); 
		return 0;
	}
	int hl = printHeightDiff(t->left); 
	int hr = printHeightDiff(t->right); 
	int diff = hl - hr;
	printf(" data: %d , diff: %d \n", t->data, diff); 
 
	if( hl > hr ) { return hl + 1; }
	else { return  hr + 1; }
 
}