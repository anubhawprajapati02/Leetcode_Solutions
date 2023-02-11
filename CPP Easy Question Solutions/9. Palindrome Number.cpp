class Solution {
public:
    bool isPalindrome(int x) {
        int i,c,r=0,re;
        c=x;
        if(x<0)
            return false;
        else
        {
            while(x!=0)
            {
                re=x%10;
                if( r>(INT_MAX/10) || r<(INT_MIN/10))
                {
                    break;
                }
               r=r*10 +re;
                x=x/10;
            }
        }
           if(r==c)
             return true;
        return false;
    }
};
