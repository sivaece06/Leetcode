class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         map<int, int> numsMap;

  for (int i = 0; i < nums.size(); i++) {
    int num = nums[i];

    if ((numsMap.find(num) != numsMap.end()) && (i - numsMap[num] <= k)) {
      return true;
    } else {
      numsMap[num] = i;
    }
  }

  return false;
    }
};
