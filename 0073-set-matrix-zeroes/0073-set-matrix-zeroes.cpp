class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstrow = false;
        bool firstcol = false;

        // Step 1: Set markers
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    if(i == 0) firstrow = true;
                    if(j == 0) firstcol = true;

                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // Step 2: Traverse the inner matrix
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Make the first row zero if needed
        if(firstrow) {
            for(int j = 0; j < matrix[0].size(); j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: Make the first column zero if needed
        if(firstcol) {
            for(int i = 0; i < matrix.size(); i++) {
                matrix[i][0] = 0;
            }
        }
    }
};