class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>m;
        for(auto x:edges)
        {
            m[x[0]].push_back(x[1]);
            m[x[1]].push_back(x[0]);
            if(m[x[0]].size()>1)
            return x[0];
            if(m[x[1]].size()>1)
            return x[1];
        }
        return 0;
    }
};
