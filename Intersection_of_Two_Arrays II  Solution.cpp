/*
Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Note:

Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> um;
        
        for(int i=0;i<nums1.size();i++)
            um[nums1[i]]++;
        
        for(int i=0;i<nums2.size();i++) {
            
            if (um.find(nums2[i])!=um.end() && um[nums2[i]]>0) {
                res.push_back(nums2[i]);
                um[nums2[i]]--;
            }
        }
        
        return res;
    }
};
