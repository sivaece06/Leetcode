/**
199. Binary Tree Right Side View
Medium

Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example 1:

Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

Example 2:

Input: root = [1,null,3]
Output: [1,3]

Example 3:

Input: root = []
Output: []
**/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> Q;
        
        if (root == nullptr)
            return {};
        
        Q.push(root);
        
        while (!Q.empty()) {
            int size = Q.size();
            
            for (int i=0; i < size; i++) {
                TreeNode* temp = Q.front();
                
                Q.pop();
                
                if (i == size-1)
                    res.push_back(temp->val);
                
                if (temp->left != nullptr)
                    Q.push(temp->left);
                
                if (temp->right != nullptr)
                    Q.push(temp->right);
            }
        }
        
        return res;
    }
};
