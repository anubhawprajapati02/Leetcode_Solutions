class Solution {
public:
    int totalMoney(int n) {
        int s=0,i,j=0;
        for(i=0;i<n;i++)
        {
            if(i%7==0)
            j++;
            s=s+j+(i%7);
        }
        return s;
    }
};
