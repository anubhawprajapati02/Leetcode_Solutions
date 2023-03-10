class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int c=target-nums[i];
            if(m.find(c)!=m.end() && i!=m[c])
            {
                v.push_back(i);
                v.push_back(m[c]);
                break;
            }
            if(v.size()!=0)
            break;
        }
        return v;
    }
};
