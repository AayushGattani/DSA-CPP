class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int row=0;row<matrix.size();row++){
            int l=0;
            int r=matrix.size()-1;
            while(l<r){
                swap(matrix[row][l],matrix[row][r]);
                l++;
                r--;
            }
        }
    }
};