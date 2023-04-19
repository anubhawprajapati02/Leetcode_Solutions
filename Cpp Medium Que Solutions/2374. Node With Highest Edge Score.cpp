class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<int,long long>m;
        vector<int>v;
        int i,index;
        long long sum=-1;
      // Taking sum of all indegree from a node.
        for(i=0;i<edges.size();i++)
        {
            m[edges[i]]+=i;
        }

        for(auto x:m)
        v.push_back(x.first);
        
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(m[v[i]]>sum)
            {
                index=v[i];
                sum=m[v[i]];
            }
        }
        return index;
    }
};
