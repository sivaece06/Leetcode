/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int max_len = 0, i = 0, j = 0;
        
        
        while (i < s.size() && j < s.size()) {
            cout<<i<<" "<<j<<endl;
                      
            if (mp.find(s[j]) == mp.end()) {
                mp.insert(s[j++]);
                max_len = max(max_len, j-i);
            } else {
                mp.erase(s[i++]);
            }
            
          
        }
        
        return max_len;
    }
};
#if 0
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
#endif
