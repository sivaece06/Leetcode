class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int maxSeen = INT_MIN, minSeen = INT_MAX;
        int end = 0, start = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxSeen = max(maxSeen, nums[i]);
            if (maxSeen > nums[i]) 
                end = i;
        }
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            minSeen = min(minSeen, nums[i]);
            if (minSeen < nums[i])
                start = i;
        }
        
       // cout << nums[start] << " " << nums[end] << endl;
        
        return end == start ? 0 : end - start + 1;
    }
};
