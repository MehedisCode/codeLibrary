// start
#define COUNT 10
void print2DUtil(struct node* root, int space){
    if (root == NULL) return;
    space += COUNT;
    print2DUtil(root->right, space);
    printf("\n");
    for (int i = COUNT; i < space; i++) printf(" ");
    printf("%d\n", root->data);
    print2DUtil(root->left, space);
}
void print2D(struct node* root){
    print2DUtil(root, 0);
}
// End