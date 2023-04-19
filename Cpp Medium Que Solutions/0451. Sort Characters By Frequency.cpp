class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        vector<int>arr;
        unordered_map<int,vector<char>>samefre;
        string ans="";
        int i;
        for(i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        for(auto x:freq)
        {
            int n=x.second;
            if(samefre.count(n))
            samefre[n].push_back(x.first);
            else
            {
                samefre[n].push_back(x.first);
                arr.push_back(n);
            }
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(i=0;i<arr.size();i++)
        {
            vector<char>t=samefre[arr[i]];
            for(int j=0;j<t.size();j++)
            {
                for(int k=0;k<arr[i];k++)
                ans+=t[j];
            }
        }
        return ans;
    }
};
