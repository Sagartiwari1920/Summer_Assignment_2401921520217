class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string temp;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            temp+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
            temp += char(s[i]+32);
            else if(s[i]>='0' && s[i]<='9')
            temp+=s[i];

        }
        int start=0,end=temp.size()-1;
        while(start<end)
        {
            if(temp[start]!=temp[end])
            return 0;
            start++,end--;
        }
        return 1;

    }
};
