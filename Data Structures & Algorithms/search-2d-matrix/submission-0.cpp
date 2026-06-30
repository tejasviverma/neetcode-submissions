class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = matrix.size();
        int right = matrix[0].size();
        int r = 0, c = right - 1;

        while(r < left && c>=0){
            if(matrix[r][c] > target){
                c--;
            } else if(matrix[r][c]< target){
                r++;
            } else {
                return true;
            }
        }
        return false;
    }
};
