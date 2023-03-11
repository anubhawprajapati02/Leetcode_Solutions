class Solution {
public:
    string say(string n)
    {
        string s="";
        int c=1,i=0;
        for(i=0;i<n.size()-1;i++)
        {
            if(n[i]==n[i+1])
            {
                c++;
            }
            else
            {
                s=s+to_string(c)+n[i];
                c=1;
            }
        }
        s=s+to_string(c)+n[i];
        return s;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++)
        {
            s=say(s);
        }
        return s;
    }
};
