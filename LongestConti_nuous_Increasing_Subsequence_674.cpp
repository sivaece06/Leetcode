class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if (nums.size() == 0)
            return 0;
        
        if (nums.size() == 1)
            return 1;
        
        int count = 1, max_m = 0;
        
        for (int i=0; i < nums.size() - 1; i++) {
            
            if (nums[i] >= nums[i+1]) {
                max_m = max(max_m, count);
                count = 1;
            } else {
                count++;
            }
        }
        
        max_m = max(max_m, count);

        return max_m;
    }
};
