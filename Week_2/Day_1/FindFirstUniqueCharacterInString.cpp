class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        char single;
        for(int i=0;i<s.size();i++)
        {
           m[s[i]]++;
        }
    for(int i=0;i<s.size();i++)
    {
          if(m[s[i]]==1)
          {
            single=s[i];
            break;
          }
    }
    
     for(int i=0;i<s.size();i++)
     {
        if(s[i]==single)
        {
            return i;
        }
     }
     return -1;


        
    }
};
