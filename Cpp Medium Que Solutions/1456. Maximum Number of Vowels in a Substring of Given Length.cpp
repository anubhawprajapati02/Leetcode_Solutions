class Solution {
public:
    int maxVowels(string s, int k) {
        deque<char>q;
        int i,m=0,c=0;
        for(i=0;i<s.size();i++)
        {
            if(q.size()==k)
            {
                if(q.front()=='a'||q.front()=='e'||q.front()=='i'||q.front()=='o'||q.front()=='u')
                {
                    c--;
                }
                q.pop_front();
                if(m<c)
                m=c;
            }
            if(i<s.size() && q.size()<k)
            {
                q.push_back(s[i]);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c++;
                if(m<c)
                m=c;
                if(c==k)
                return k;
            }
        }
        return m;
    }
};
