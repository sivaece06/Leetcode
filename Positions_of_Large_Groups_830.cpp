class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>>ans;
        
        if(S.size()<3)
            return {};
        
        int start,end;
        
        for(int i=0;i<S.size()-2;i++){
            if(S[i]==S[i+1] && S[i+1]==S[i+2]){
                start=i;
                int j=i+1;
                while(S[i]==S[j]){
                    j++;
                }
                end=j-1;
                i=end;
                ans.push_back({start,end});
            }
            
        }
        return ans;
    }
};
