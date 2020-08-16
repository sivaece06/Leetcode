class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int Row = matrix.size();
        int Col = matrix[0].size();
        bool retval = true;
        cout << Row << " " << Col;
        
        for (int i = 0; i < (Row - 1); i++) {
            for (int j = 0; j < (Col - 1); j++) {
                if (matrix[i][j] == matrix[i+1][j+1])
                    retval = true;
                else
                    return false;
            }
        }
        
        return retval;
    }
};
