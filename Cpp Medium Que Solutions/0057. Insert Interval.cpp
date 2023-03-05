class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>r;
        vector<int>v;
        unordered_map<int,int>m;
        int i;
        intervals.push_back(newInterval);
        for(i=0;i<intervals.size();i++)
        {
            if(m.count(intervals[i][0]) && (m[intervals[i][0]]<intervals[i][1]))
            m[intervals[i][0]]=intervals[i][1];
            if(!m.count(intervals[i][0]))
            m[intervals[i][0]]=intervals[i][1];
        }
        for(auto x:m)
        {
            int n=x.second;
            for(i=x.first+1;i<=n;i++)
            {
                if(m.count(i) && (n<m[i]))
                {
                    n=m[i];
                    m[x.first]=m[i];
                    m.erase(i);
                }
                if(m.count(i) && (n>=m[i]))
                {
                    m.erase(i);
                }
            }
        }
        for(auto x:m)
        {
            v.push_back(x.first);
            v.push_back(x.second);
            r.push_back(v);
            v.clear();
        }
        sort(r.begin(),r.end());
        return r;
    }
};
