class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
    vector<int> arr(grid[0].size(),0);
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            int l = to_string(grid[i][j]).length();
            if(arr[j]<l)arr[j]=l;
        }
    }return arr;
    }
};