class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col) {
        int n = grid.size();
        int m = grid[0].size();

        // Base Case
        if (row < 0 || col < 0 || row >= n || col >= m || grid[row][col] == '0')
            return;

        // Mark current cell as visited
        grid[row][col] = '0';

        // Visit all 4 directions
        dfs(grid, row - 1, col); // Up
        dfs(grid, row + 1, col); // Down
        dfs(grid, row, col - 1); // Left
        dfs(grid, row, col + 1); // Right
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int islands = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == '1') {
                    islands++;
                    dfs(grid, i, j);
                }

            }
        }

        return islands;
    }
};