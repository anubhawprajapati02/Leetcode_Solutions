class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>m;
        int i;
        if(edges.size()==0)
        {
            m[0].push_back(0);
        }
        for(auto x:edges)
        {
            vector<int>t=x;
            m[t[0]].push_back(t[1]);
            m[t[1]].push_back(t[0]);
        }
        vector<bool>v(n,false);
        queue<int>q;
        q.push(source);
        v[source]=1;
        while(!q.empty())
        {
            int num=q.front();
            q.pop();
            for(auto x:m[num])
            {
                if(v[x]==false)
                {
                    q.push(x);
                    v[x]=1;
                }
                if(v[destination]==true)
                return 1;
            }
        }
        return 0;
    }
};
