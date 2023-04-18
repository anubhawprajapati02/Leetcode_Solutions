class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        unordered_map<int,int>m;//this will store number at their index
        unordered_map<int,vector<int>>index;  // this will store the all the index of any particular number in ascending order
        priority_queue <int, vector<int>, greater<int>>p; // it is used to take out the minimum number present in the array list
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            m[i]=nums[i];
            index[nums[i]].push_back(i);
            if(index[nums[i]].size()==1)
            p.push(nums[i]);
        }
      // storage process is completed till here.
        int n=p.size();  // it stores the size of priority queue.
        for(i=0;i<n;i++)  // main operation is done in this loop only.
        {
            int s=p.top();  // smallest element of the array.
            p.pop();
            vector<int>t; // temporary vector to store the index of the smallest element in array.
            if(index.count(s))
            {
                t=index[s];
                index.erase(s);
            }
            for(j=0;j<t.size();j++)   // the operation that has to be performed is this only using all the data structures.
            {
                if(m.count(t[j]))
                {
                    ans=ans+s;
                    m.erase(t[j]);
                    if(m.count(t[j]+1))
                    m.erase(t[j]+1);
                    if(m.count(t[j]-1))
                    m.erase(t[j]-1);
                }
                if(m.size()==0)
                return ans ;
            }
        }
        return ans ;
    }
};
