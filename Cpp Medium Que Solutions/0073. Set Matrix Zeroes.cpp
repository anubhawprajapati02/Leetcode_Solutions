class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        set<int>r,c;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(i=0;i<matrix.size();i++)
        {
            if(r.count(i))
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(i=0;i<matrix[0].size();i++)
        {
            if(c.count(i))
            {
                for(j=0;j<matrix.size();j++)
                {
                    matrix[j][i]=0;
                }
            }
        }
    }
};
