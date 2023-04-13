class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int i=0,j=0,m,n,k;
        m=matrix.size()-1;
        n=matrix[0].size()-1;
        while(i<=m && j<=n)
        {
            for(k=j;k<=n;k++)
            {
                v.push_back(matrix[i][k]);
            }
            i++;
            if(i>m)
            break;
            for(k=i;k<=m;k++)
            {
                v.push_back(matrix[k][n]);
            }
            n--;
            if(j>n)
            break;
            for(k=n;k>=j;k--)
            {
                v.push_back(matrix[m][k]);
            }
            m--;
            for(k=m;k>=i;k--)
            {
                v.push_back(matrix[k][j]);
            }
            j++;
        }
        return v;
    }
};
