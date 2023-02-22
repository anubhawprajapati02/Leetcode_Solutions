class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        unordered_map<int,int>m;
        for(i=0;i<nums.size();i++)
        {
            if(!m.count(nums[i]))
            m[nums[i]]++;
            else
            return nums[i];
        }
        return 0;
    }
};
