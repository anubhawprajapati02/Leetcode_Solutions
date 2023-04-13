class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int i,j=0;
        for(i=0;i<pushed.size();i++)
        {
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
                if(j>=popped.size())
                break;
            }
        }
        return st.empty();
    }
};
