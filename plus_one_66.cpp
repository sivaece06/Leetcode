class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size();
        
        while(--i>=0){
            digits[i]++;
        
            if(digits[i]<=9) 
                break;
            else
                digits[i] = 0;
        }
        
        if(i==-1) 
            digits.insert(digits.begin(),1);
        
        return digits;
    }
};
