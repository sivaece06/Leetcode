class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = ((nums.size())*(nums.size()+1))/2;
        int count=0;
        
        for(int i=0;i < nums.size();i++)
            count += nums[i];
        
        return sum-count;
    }
};
