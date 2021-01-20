/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        cout<<"Length: "<<s.length()<<" end: "<<end<<endl;
        while(start<end) {
            cout<<s[start]<<" "<<isalnum(s[start])<<" "<<s[end]<<" "<<isalnum(s[end])<<endl;
            while(start<end && isalnum(s[start])==0)
                start++;
            while(end>=0 && isalnum(s[end])==0)
                end--;
            
            if (start<end && end>=0 && tolower(s[start]) != tolower(s[end])) {
                cout<<"Return false: "<<s[start]<<" "<<s[end]<<endl;
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
};
