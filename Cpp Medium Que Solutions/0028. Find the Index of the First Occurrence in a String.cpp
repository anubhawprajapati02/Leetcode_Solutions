class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map<int,char>m;
        int i,j=0;
        for(i=0;i<needle.size();i++)
        {
            m[i]=needle[i];
        }
        for(i=0;i<haystack.size();i++)
        {
            if(haystack[i]==m[j])
            {
                j++;
            }
            else
            {
                i=i-j;
                j=0;
            }
            if(j==m.size())
            return i-j+1;
        }
        return -1;
    }
};
