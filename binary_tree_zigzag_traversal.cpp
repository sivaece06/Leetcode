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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     	if(root == NULL) return{};
	queue<TreeNode*> Q;
	Q.push(root);  
    vector<vector<int>> res;
    int leftToright = 1;
        
	//while there is at least one discovered node
	while(!Q.empty()) {
        int size = Q.size();
      //  cout<<"size: "<<size<<endl;
        vector<int> r(size);
        
        for (int i=0; i<size;i++) {
            TreeNode* current = Q.front();
            Q.pop(); // removing the element at front

      //      cout<<current->val<<" ";
            
            int index = (leftToright)?i:size-i-1;
            r[index] = current->val;

            if(current->left != NULL) 
                Q.push(current->left);
            if(current->right != NULL) 
                Q.push(current->right);
        
        }
        
        res.push_back(r);
        leftToright = !leftToright;
	}
        return (res);
    }
};
