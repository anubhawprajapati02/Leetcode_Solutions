class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans="";
        for(auto x:s)
        {
            if(st.size()==0 || st.top().first!=x)
            st.push({x,1});
            else
            {
                st.top().second++;
            }
            if(st.top().second==k)
            st.pop();
        }
        while(!st.empty())
        {
            ans.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
