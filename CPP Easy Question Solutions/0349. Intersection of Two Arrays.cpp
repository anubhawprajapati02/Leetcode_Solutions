class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                v.push_back(nums1[i]);
                j++;
                i++;
            }
            else if(nums1[i]>nums2[j])
            j++;
            else
            i++;
        }
        vector<int>::iterator ip;
        ip = std::unique(v.begin(), v.end());
        v.resize(std::distance(v.begin(), ip));
        return v;
    }
};
