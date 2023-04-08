class Solution {
public:
    int isvalid(int i,int j,int m,int n,vector<vector<char>>&grid)
    {
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j]=='1')
        return 1;
        return 0;
    }
    void Island(int i,int j,int m,int n,vector<vector<char>>&grid)
    {
        grid[i][j]='0';
        if(isvalid(i+1,j,m,n,grid))
        Island(i+1,j,m,n,grid);
        if(isvalid(i-1,j,m,n,grid))
        Island(i-1,j,m,n,grid);
        if(isvalid(i,j+1,m,n,grid))
        Island(i,j+1,m,n,grid);
        if(isvalid(i,j-1,m,n,grid))
        Island(i,j-1,m,n,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m,n,r=0;
        m=grid.size();
        n=grid[0].size();
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    r++;
                    Island(i,j,m,n,grid);
                }
            }
        }
        return r;
    }
};
