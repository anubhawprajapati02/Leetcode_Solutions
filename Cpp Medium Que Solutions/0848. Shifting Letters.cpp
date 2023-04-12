class Solution {
public:
    char shift(char st,int n)
    {
        if(n>26)
        n=n%26;
        int c=st;
        c=c+n;
        if(c>122)
        c=(c%122)+96;
        char s=c;
        return s;
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        int i,j,sum=0;
        for(i=shifts.size()-1;i>=0;i--)
        {
            if(shifts[i]>26)
            shifts[i]%=26;
            sum=sum+shifts[i];
            shifts[i]=sum;
        }
        for(i=0;i<shifts.size();i++)
        {
            char a=shift(s[i],shifts[i]);
            s[i]=a;
        }
        return s;
    }
};
