class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        int count=0;
        for(char ch:s1)
        {
            mp[ch]++;
        }
        count=mp.size();
        while(j<s2.size())
        {
            
                if(mp.count(s2[j]))
            {
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                count--;
            }
            
            if(j-i+1 == n)
            {
                if(count==0)
                return 1;
                else
                {
                    if(mp.count(s2[i]))
                    {
                        if(mp[s2[i]]==0)
                        count++;

                        mp[s2[i]]++;
                        
                    }
                    i++;
                }
            }
            j++;
            

        }
        return 0;
    }
};
