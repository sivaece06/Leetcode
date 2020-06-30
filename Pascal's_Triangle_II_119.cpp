class Solution {
public:
    vector<int> getRow(int rowIndex) {
              vector<int> pascal(rowIndex + 1, 1);
        
		/* Each line of the Pascal's triangle. */
        for (int i = 1; i < rowIndex; i++)
        {
			/* Compute element of new line from end to front. */
            for (int j = i + 1; j > 1; j--)
            {
                pascal[j-1] = pascal[j-1] + pascal[j-2];
            }
        }
        return pascal;
    }
};
