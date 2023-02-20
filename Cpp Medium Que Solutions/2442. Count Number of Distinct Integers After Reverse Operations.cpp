class Solution {
public:
    int reverse(int n)
    {
        int r=0;
        while(n!=0)
        {
            r=r*10+(n%10);
            n/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int i,n;
        unordered_map<int,int>m;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            nums.push_back(reverse(nums[i]));
        }
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        return m.size();
    }
};
