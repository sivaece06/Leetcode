class Solution {
public:
    int maximumProduct(vector<int>& nums) {
#if 0      
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1] * nums.back(),
                   nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3]);
#endif
        int N = nums.size();
        nth_element(nums.begin(),nums.begin()+N-1,nums.end());
        int max1 = nums[N-1];
        
        nth_element(nums.begin(),nums.begin()+N-2,nums.end());
        int max2 = nums[N-2];
        
        nth_element(nums.begin(),nums.begin()+N-3,nums.end());
        int max3 = nums[N-3];
        
        nth_element(nums.begin(),nums.begin()+0,nums.end());
        int min1 = nums[0];
        
        nth_element(nums.begin(),nums.begin()+1,nums.end());
        int min2 = nums[1];
    
       // cout << min1 << " " << min2 << " "<< max1 << " " << max2 << " " << max3;
        return max(max1*max2*max3,min1*min2*max1);
    }
};
