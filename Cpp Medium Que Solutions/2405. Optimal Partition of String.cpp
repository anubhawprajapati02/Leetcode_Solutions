class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>m;
        int i,c=0;
        for(i=0;i<s.size();i++)
        {
            if(!m.count(s[i]))
            {
                m[s[i]]++;
            }
            else
            {
                c++;
                m.clear();
                m[s[i]]++;
            }
        }
        if(m.size()!=0)
        c++;
        return c;
    }
};
