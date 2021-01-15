/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        
        for(auto n:nums)
            num = num ^ n;
        
        return num;
       
    }
};
