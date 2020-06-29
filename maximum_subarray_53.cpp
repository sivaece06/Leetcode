class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if (curSum < 0)
                curSum = 0;
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }
};

/* Method 2 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCurrent = nums[0];
        int ans = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            maxCurrent = max(maxCurrent + nums[i], nums[i]);
            
            if (ans < maxCurrent)
                ans = maxCurrent;
        }
        return (ans);
    }   
};
