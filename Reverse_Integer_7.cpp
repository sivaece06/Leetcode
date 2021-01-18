/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
*/

class Solution {
public:
    int reverse(int x) {
        
        int pop;
        long long temp;
        long long rev=0;
        
        while(x) {
            pop = x % 10;
            temp = rev * 10 + pop;
            
            rev = temp;
            x/=10;
        }
        return (rev>INT_MAX || rev<INT_MIN)?0:rev;
        }
};
