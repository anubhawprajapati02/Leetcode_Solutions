class Solution {
public:
    string digits(int n)
    {
        string c="";
        while(n!=0)
        {
            c=c+to_string(n%10);
            n=n/10;
        }
        return c;
    }

    int compress(vector<char>& chars) {
        int i,k=0,c;
        for(i=0;i<chars.size();i++)
        {
            c=1;
            while(i<chars.size()-1 && (chars[i]==chars[i+1]))
            {
                i++;
                c++;
            }
            
            chars[k++]=chars[i];
            if(c!=1)
            {
                string s=digits(c);
                for(int j=s.size()-1;j>=0;j--)
                {
                    chars[k++]=s[j];
                }
            }
        }
        return k;
    }
};
