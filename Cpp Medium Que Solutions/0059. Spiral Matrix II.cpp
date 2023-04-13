class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int>v(n);
        vector<vector<int>>r(n,v);
        int i=0,j=0,m,k,num=1,l;
        n=n-1;
        m=n;
        while(i<=m && j<=n)
        {
            for(k=j;k<=n;k++)
            {
                r[i][k]=(num++);
            }
            i++;
            if(i>m)
            break;
            for(k=i;k<=m;k++)
            {
                r[k][n]=(num++);
            }
            n--;
            if(j>n)
            break;
            for(k=n;k>=j;k--)
            {
                r[m][k]=(num++);
            }
            m--;
            for(k=m;k>=i;k--)
            {
                r[k][j]=(num++);
            }
            j++;
        }
        return r;
    }
};
