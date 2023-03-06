class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v;
        int i,j=0;
        for(i=1;i<arr[arr.size()-1];i++)
        {
            if(j==arr.size())
            break;
            if(i!=arr[j])
            {
                v.push_back(i);
            }
            else
            j++;
        }
        if(k<=v.size())
        return v[k-1];
        else
        {
            int re=k-v.size();
            return arr[arr.size()-1]+re;
        }
        return 0;
    }
};
