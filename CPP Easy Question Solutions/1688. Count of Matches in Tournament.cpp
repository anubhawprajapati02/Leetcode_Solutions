class Solution {
public:
    int numberOfMatches(int n) {
        int c=0,m;
        while(n>1)
        {
            if(n%2!=0)
            {
                m=n/2;
                c=c+m;
                n=m+1;
            }
            else
            {
                m=n/2;
                c=c+m;
                n=m;
            }
        }
        return c;
    }
};
