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
    void binaryTreePaths(TreeNode* root, vector<string>& result, string t){
        if(!root->left&&!root->right){
            result.push_back(t);
            return; 
        }
        
        if(root->left) binaryTreePaths(root->left,result,t+"->"+to_string(root->left->val));
        if(root->right) binaryTreePaths(root->right,result,t+"->"+to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root) return result;
        binaryTreePaths(root,result,to_string(root->val));
    }
    

};
