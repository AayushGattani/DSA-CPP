/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val== p->val || root->val==q->val){
            return root;
        }
        TreeNode* leftca=lowestCommonAncestor(root->left,p,q) ;
        TreeNode* rightca=lowestCommonAncestor( root->right,p,q) ;
        if(leftca && rightca){
            return root;
        }
        else if(leftca!=NULL){
            return leftca;
        }
        else{
            return rightca;
        }



        
    }
};