class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        unordered_map<double,int>m;
        int i,j,n,ans=0,infiniteSlope=0;
        double slope;
        n=points.size();
        for(i=0;i<n;i++)
        {
            infiniteSlope=0;
            for(j=i+1;j<n;j++)
            {
                //Condition for infinite slope.
                //No need to check for slope zero because we have not taken same points into consideration .
                if(points[i][0]==points[j][0])
                {
                    infiniteSlope++;
                    continue;
                }
                m[float(points[i][1]-points[j][1])/(points[i][0]-points[j][0])]++;
            }
            ans=max(ans,infiniteSlope+1);
            for(auto x:m)
            ans=max(ans,x.second +1);
            m.clear();
        }
        return ans;
    }
};
