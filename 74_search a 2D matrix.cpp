class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int cursor = 0;
        if(!m || !n)
            return false;
        for(int i = 0; i < m; i++) {
            if (target == matrix[i][n-1] || target == matrix[i][0])
                return true;
            if (target > matrix[i][0] && target < matrix[i][n-1]) {
                cursor = i;
                break;
            }
        }
        
        // for (int i = 0; i < n; i++) {
        //     if (target == matrix[cursor][i])
        //         return true;
        // }
        int left = 0, right = n -1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (target == matrix[cursor][mid])
                return true;
            if(target < matrix[cursor][mid])
                right = mid;
            else 
                left = mid + 1;
        }
        return false;  
    }
};