class Solution {
public:
    int isvalid(int i,int j,int m,int n,vector<vector<int>>&image,int p)
    {
        if(i>=0 && i<m && j>=0 && j<n && image[i][j]==p)
        return 1;
        return 0;
    }
    void dfs(vector<vector<int>>&image,int i,int j,int m,int n,int p,int c)
    {
        image[i][j]=c;
        if(isvalid(i+1,j,m,n,image,p))
        dfs(image,i+1,j,m,n,p,c);
        if(isvalid(i-1,j,m,n,image,p))
        dfs(image,i-1,j,m,n,p,c);
        if(isvalid(i,j+1,m,n,image,p))
        dfs(image,i,j+1,m,n,p,c);
        if(isvalid(i,j-1,m,n,image,p))
        dfs(image,i,j-1,m,n,p,c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int p,m,n;
        p=image[sr][sc];
        m=image.size();
        n=image[0].size();
        if(p==color)
        return image;
        dfs(image,sr,sc,m,n,p,color);
        return image;
    }
};
