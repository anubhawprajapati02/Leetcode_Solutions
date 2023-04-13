class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int r=0,i,c=0;
        vector<int>v;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            c++;
            else
            {
                v.push_back(c);
                v.push_back(0);
                c=0;
            }
        }
        if(c!=0)
        v.push_back(c);
        if(v.size()==1)
        return v[0]-1;
        for(i=0;i<v.size();i++)
        {
            if(v[i]>r)
            r=v[i];
            if(v[i]==0 && i>0 && i+1<v.size() && (v[i-1]+v[i+1])>r)
            r=v[i-1]+v[i+1];
        }
        return r;
    }
};
