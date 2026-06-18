class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(str.begin(),str.end());
                ans+=str+" ";
                str="";
            }
            else
            {
                str+=s[i];
            }
        }
        if(!str.empty())
        {
            reverse(str.begin(),str.end());
            ans+=str;
        }
        return ans;
    }
};