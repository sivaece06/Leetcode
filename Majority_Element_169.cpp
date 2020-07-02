class Solution {
public:
#if 0
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        
		int n = nums.size()/2;
        
		for(auto x : nums){
			map[x]++;
			if(map[x]>n)
				return x;
		}

		return -1;
    }
#endif 

    int majorityElement(vector<int>& nums) {
     if(nums.empty()) return 0;
        int count=0,num;
        for(int i=0; i<nums.size(); i++) {
            if(count == 0) 
                num = nums[i];
            count += nums[i]==num ? 1: -1;
        }
        return num;
    }
};
