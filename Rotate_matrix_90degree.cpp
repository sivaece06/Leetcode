/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

class Solution {
public:
    void transpose(vector<vector<int> >& matrix) {
        for(int i=0;i<matrix.size();i++) {
            for(int j=i+1;j<matrix[0].size();j++)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    void reverse(vector<int>& row) {
        int n = row.size();
        
        for(int i=0;i<n/2;i++){
            swap(row[i], row[n-i-1]);
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        
        for(int i=0;i<matrix.size();i++)
            reverse(matrix[i]);
    }
};
