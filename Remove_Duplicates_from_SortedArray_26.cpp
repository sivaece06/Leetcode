class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count;
        
        if (nums.size())
            count = 1;
        else
            return 0;
        
        
        for(int i=1; i < nums.size(); i++) {
            if (nums[count-1] != nums[i]) { 
                nums[count++] = nums[i];
            }
             
        }

        return (count);
    }
};
