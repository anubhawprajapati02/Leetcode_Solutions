class Solution {
public:
    void fib(vector<int>&v,int k)
    {
        int a=1,b=1,c=2;
        v.push_back(1);
        v.push_back(1);
        while(c<=k)
        {
            v.push_back(c);
            a=b;
            b=c;
            c=a+b;
        }
    }
    int findMinFibonacciNumbers(int k) {
        vector<int>v;
        int c=0,i;
        fib(v,k);
            for(i=v.size()-1;i>=0;i--)
            {
                if(k<=0)
                break;
                if(v[i]<=k)
                {
                    c++;
                    k=k-v[i];
                    i++;
                }
            }
        return c;
    }
};
