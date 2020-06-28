class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int len = nums.size();
        
        if (nums[len-1] < target)
                return (len);
        
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] == target)
                return (i);
            else if ((i != len -1) && (nums[i] < target) && (nums[i + 1] > target))
                return (i+1);
        }
        
        return (0);
    }
};
