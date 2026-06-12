class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        unordered_map<char,int>m;
        if(n!=t.size())
        return 0;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            char c=t[i];
            if(m[c]>=1)
            {
                m[c]--;
            }
            else
            return 0;
        }
        return 1;
        
    }
};
