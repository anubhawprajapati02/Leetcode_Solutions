class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>r;
        unordered_map<int,int>m;
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            v.push_back(x.second);
            v.push_back(x.first);
            r.push_back(v);
            v.clear();
        }
        sort(r.begin(),r.end());
        for(i=0;i<r.size();i++)
        {
            j=i+1;
            while(j<r.size() && r[i][0]==r[j][0])
            j++;
            for(int k=j-1;k>=i;k--)
            {
                for(int l=0;l<r[k][0];l++)
                v.push_back(r[k][1]);
            }
            i=j-1;
        }
        return v;
    }
};
