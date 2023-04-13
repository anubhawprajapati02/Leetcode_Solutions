class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        unordered_map<int,vector<char>>m;
        int i,j,c=0;
        for(i=0;i<strs.size();i++)
        {
            for(j=0;j<strs[i].size();j++)
            {
                m[j].push_back(strs[i][j]);
            }
        }
        for(auto x:m)
        {
            vector<char>s=x.second;
            for(i=1;i<s.size();i++)
            {
                if(s[i]<s[i-1])
                {
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};
