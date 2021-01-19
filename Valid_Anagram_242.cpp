/*
Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> mp;
        map<int, int> mps;
        
        if(s.length() != t.length())
            return false;
        
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        
        for(int i=0;i<t.length();i++) {
            mp[t[i]]--;
            
            if(mp[t[i]]<0)
                return false;
            
        }
        
/*        for(int i=0;i<t.length();i++)
            mps[t[i]]++;
        
        for(int i=0;i<t.length();i++){
            if(mps[t[i]]!=mp[t[i]])
                return false;
        }*/

        return true;
    }
};
