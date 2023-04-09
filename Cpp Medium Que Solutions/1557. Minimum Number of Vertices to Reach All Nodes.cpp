class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>r,ind(n,0);
        for(auto x:edges)
        {
            ind[x[1]]++;
        }
        for(int i=0;i<n;i++)
        if(ind[i]==0)
        r.push_back(i);
        return r;
    }
};
