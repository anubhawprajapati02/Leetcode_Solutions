class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        vector<int>ans(nums.size());
        unordered_map<int,int>m;
        int i;
        for(i=0;i<nums.size();i++)
        m[nums[i]]=i;

        for(i=0;i<operations.size();i++)
        {
            m[operations[i][1]]=m[operations[i][0]];
            m.erase(operations[i][0]);
        }
        for(auto x:m)
        {
            ans[x.second]=x.first;
        }
        return ans;
    }
};
