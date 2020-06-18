class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        
        if (size == 0)
            return (0);
        
        int a, b, c;
        
        a = nums[0];
        b = 0;
    
        for (int i = 1; i < size; i++) {
            
            c = nums[i] + b;
            
            b = max (a, b);
            
            a = c;
            
        }
        
        return (max(a, b));
    }
};
