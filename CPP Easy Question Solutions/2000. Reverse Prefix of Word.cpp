class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int i;
        for(i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                s+=word[i];
                reverse(s.begin(),s.end());
                break;
            }
            else
            {
                s+=word[i];
            }
        }
        if(i==word.size())
        return word;

        for(i++;i<word.size();i++)
        {
            s+=word[i];
        }
        return s;
    }
};
