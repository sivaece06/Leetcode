/**
  Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

    Example 1:

    Input: nums = [1,2,3]
    Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

    Example 2:

    Input: nums = [0,1]
    Output: [[0,1],[1,0]]

    Example 3:

    Input: nums = [1]
    Output: [[1]]
**/
class Solution {
public:
    void helper(vector<vector <int>>& res, vector<int>& nums, int pos) {
        if (pos == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for (int i = pos; i < nums.size(); i++) {
            swap(nums[i], nums[pos]);
            helper(res, nums, pos+1);
            swap(nums[i], nums[pos]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        helper(res, nums, 0);
        
        return res;
    }
};
