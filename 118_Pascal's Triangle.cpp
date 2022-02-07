class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> row = {{1}};
        if(numRows < 1)
            return row;
        for (int i = 1; i < numRows; i++){
            
            vector<int> temp;
            temp.push_back(1);
            
            for (int j = 1; j <= i - 1; j++){
                temp.push_back(row[i-1][j-1] + row[i-1][j]);
            }
            temp.push_back(1);
            row.push_back(temp);
        }
        
        return row;
    }
};