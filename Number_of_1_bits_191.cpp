class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        
        for(;n>0; n>>=1){
            if (n & 0x1) cnt++;
        }
        return cnt;
    }
};
