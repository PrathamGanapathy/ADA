struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if (root1 == NULL && root2 == NULL) return NULL;
    if (root1 == NULL) return root2;
    else if (root2 == NULL) return root1;
    root1->val += root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
    
}
