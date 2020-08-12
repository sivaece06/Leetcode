class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        int index = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max) {
                index = i;
                continue;
            }
            
            if (nums[i] * 2 > max)
                return -1;
        }
        
        return index;
    }
};
