class Solution {
public:
    void dfs(int i,vector<int>v,vector<bool>b,int d,vector<vector<int>>&r,unordered_map<int,vector<int>>m)
    {
        b[i]=1;
        v.push_back(i);
        if(i==d)
        r.push_back(v);
        for(auto x:m[i])
        {
            if(b[x]==false)
            dfs(x,v,b,d,r,m);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int i,j,d;
        d=graph.size();
        unordered_map<int,vector<int>>m;
        vector<vector<int>>r;
        vector<int>v;
        for(i=0;i<d;i++)
        {
            for(j=0;j<graph[i].size();j++)
            {
                m[i].push_back(graph[i][j]);
            }
        }
        vector<bool>b(d,false);
        dfs(0,v,b,d-1,r,m);
        return r;
    }
};
