class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i;
        vector<int>v,c;
        unordered_map<int,int>m;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        c.push_back(x.second);
        sort(c.begin(),c.end());
        i=c.size()-1;
        while(k>0 && i>=0)
        {
            for(auto x:m)
            {
                if(x.second==c[i])
                {
                    v.push_back(x.first);
                    m.erase(x.first);
                    break;
                }
            }
            i--;
            k--;
        }
        return v;
    }
};
