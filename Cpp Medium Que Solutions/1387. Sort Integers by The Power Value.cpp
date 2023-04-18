class Solution {
public:
    long power(int n)
    {
        long c=0;
        if(n==1)
        return c;
        else
        {
            while(n!=1)
            {
                c++;
                if(n%2==0)
                n=n/2;
                else
                n=(n*3)+1;
            }
        }
        return c;
    }
    int getKth(int lo, int hi, int k) {
        int i;
        unordered_map<int,vector<int>>m;  //it will store all the numbers with same power in vector.
        vector<int>v;
        for(i=lo;i<=hi;i++)
        {
            long p=power(i);
            m[p].push_back(i);
        }
        for(auto x:m)
        v.push_back(x.first); // store all the powers in a vector for sorting.
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(m[v[i]].size()>=k)
            return m[v[i]][k-1];
            else
            {
                k=k-m[v[i]].size();
            }
        }
        return 0;
    }
};
