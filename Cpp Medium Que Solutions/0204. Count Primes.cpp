class Solution {
public:
    int countPrimes(int n) {
        vector<int>v(n,1);
        if(n>0)
        v[0]=0;
        if(n>1)
        v[1]=0;
        int i=2,c=0;
        while(i<=(n/2))
        {
            if(v[i]==1)
            for(int j=i*2;j<n;j=j+i)
            v[j]=0;
            i++;
        }
        for(i=0;i<n;i++)
        {
        if(v[i]==1)
        c++;
        }
        return c;
    }
};
