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
 The node is a leaf node - In this cases, we can just delete the node and return the root,
 since deleting any elaf node doesn't affect the remainig tree.
  The node has one child - In this case, replace the node with the child node and return the root.
  The node has 2 children - In this case, in order to conserve the BST properties, 
  we need to replace the node with it's inorder successor (The next node that comes in the inorder traversal) i.e; 
we need to replace it with either :
1. The greatest value node in it's left subtree (or)
2. The smallest value node in it's right subtree
and return the root.
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
   if(root) 
            if(key < root->val) 
                root->left = deleteNode(root->left, key);     //We frecursively call the function until we find the target node
            else if(key > root->val) 
                root->right = deleteNode(root->right, key);       
            else{
                if(!root->left && !root->right) 
                    return NULL;          //No child condition
                 //One child contion -> replace the node with it's child
                if (!root->left || !root->right)
                    return root->left ? root->left : root->right;   
				 //Two child condition   	                                               
                TreeNode* temp = root->left;                        //(or) TreeNode *temp = root->right;
                while(temp->right != NULL) temp = temp->right;     //      while(temp->left != NULL) temp = temp->left;
                root->val = temp->val;                            //       root->val = temp->val;
                root->left = deleteNode(root->left, temp->val);  //        root->right = deleteNode(root->right, temp);		
            }
        return root;
    }
};
