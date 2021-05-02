/* 

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          vector<vector<string>> ans;
        unordered_map<string, vector<string>> yo;
        string temps;
        
        for(int i=0;i<strs.size();i++){
            temps= strs[i];
           // cout<<"before sort: "<< temps<<endl;
            sort(temps.begin(),temps.end());
           // cout<<"after sort: "<< temps<<endl;
            yo[temps].push_back(strs[i]);
        }
        for(auto i: yo){
            
            ans.push_back(i.second);
        }
        return ans;
    }
};
