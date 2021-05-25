/**

Given an integer N representing the number of pairs of parentheses, the task is to generate all combinations of well-formed(balanced) parentheses.

**/

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> res;
    
    void helper_fn(string tmp_res, int open, int close) {
        
        if (open == 0 && close == 0) {
            res.push_back(tmp_res);
            return;
        }
        
        if (open > 0)
            helper_fn(tmp_res + "(", open-1, close);
        
        if (close > open)
            helper_fn(tmp_res + ")", open, close-1);
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
       
        
        helper_fn("", n, n);
        
        return res;
    }
};
