class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        set<int> st;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                
                st.insert(grid[i][j]); // single cell
                
                for(int k = 1; k < max(m,n); k++){
                    
                    if(i-k < 0 || i+k >= m || j-k < 0 || j+k >= n)
                        break;
                    
                    int sum = 0;
                    
                    int r = i-k, c = j;
                    
                    // top -> right
                    for(int t=0; t<k; t++){
                        sum += grid[r++][c++];
                    }
                    
                    // right -> bottom
                    for(int t=0; t<k; t++){
                        sum += grid[r++][c--];
                    }
                    
                    // bottom -> left
                    for(int t=0; t<k; t++){
                        sum += grid[r--][c--];
                    }
                    
                    // left -> top
                    for(int t=0; t<k; t++){
                        sum += grid[r--][c++];
                    }
                    
                    st.insert(sum);
                }
            }
        }
        
        vector<int> ans;
        
        for(auto it = st.rbegin(); it != st.rend() && ans.size() < 3; it++){
            ans.push_back(*it);
        }
        
        return ans;
    }
};