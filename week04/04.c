int printHeightDiff (BSTree t) { 

    if (t==NULL) {
        printf("heightDiff: 0\n");
        return 0;
    }

    if (t->left == NULL && t->right == NULL) {
        printf("data: %d, heightDiff: 0\n", t->data);
        return 0;
    }

    int left = printHeightDiff(t->left);
    int right = printHeightDiff(t->right);

    printf ("data: %d, heightDiff: %d\n", t->data, 
                abs(left - right));

    return 1 + max(left, right);


}