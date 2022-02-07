class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int k = mat.size() * mat[0].size();
        if(r == mat.size() || c == mat[0].size() || k != r * c) 
            return mat;
        vector<vector<int>> reshapedMatrix(r, vector<int>(c,0) );

        int f = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++){
                reshapedMatrix[i][j] = mat[f/mat[0].size()][f%mat[0].size()];
                f++;
            }
        }
        

        return reshapedMatrix;
    }
};