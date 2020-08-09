class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int f[n];
        
        f[0] = cost[0];
        f[1] = cost[1];
        
        if(cost.size()==2) 
            return min(f[0],f[1]);
        
        for(int i=2;i<n;i++)
            f[i] = cost[i]+min(f[i-1],f[i-2]);
        
        return min(f[n-1],f[n-2]);
    }
};
