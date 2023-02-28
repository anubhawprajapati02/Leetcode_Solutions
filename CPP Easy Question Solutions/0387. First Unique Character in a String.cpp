class Solution {
public:
    int firstUniqChar(string s) {
        int i,j,c=0;
        for(i=0;i<s.size();i++)
        {
            c=0;
            if(i>0)
            {
                j=0;
                while(i>j)
                {
                    if(s[i]==s[j])
                    {
                    c++;
                    break;
                    }
                    j++;
                }
            }
            if(c!=0)
            continue;
            j=i+1;
            while(j<s.size())
            {
                if((s[i]^s[j])==0)
                {
                c++;
                break;
                }
                j++;
            }
            if(c==0)
            {
                return i;
                break;
            }
            c=0;
        }
        if(s.size()==1)
        return 0;
        // if(s.size()-1==i)
        // return i;
        return -1;
    }
};
