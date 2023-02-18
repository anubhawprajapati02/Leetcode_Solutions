class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i;
        stack<int>s;
        for(i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*")
            {
                int t=stoi(tokens[i]);
                s.push(t);
            }
            else
            {
                int a,b,c;
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                if(tokens[i]=="+")
                c=a+b;
                else if(tokens[i]=="-")
                c=a-b;
                else if(tokens[i]=="/")
                c=a/b;
                else
                c=a*b;
                s.push(c);
            }
        }
        int c=s.top();
        return c;
    }
};
