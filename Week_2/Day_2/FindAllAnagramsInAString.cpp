
  class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        int i=0,j=0;
     
        vector<int>ans;
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++)
        {
            mp[p[i]]++;
        }
        int count = mp.size();
        while(j<n)
        {
         
           if(mp.count(s[j]))
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
            count--;
            }
           
             if(j-i+1 == m)
          {
            if(count==0)
            {
                ans.push_back(i);
            }
                
            if(mp.count(s[i]))
            {
                if(mp[s[i]]==0)
                {
                    count++;
                }
                mp[s[i]]++;
            }
            
            i++;
                
                
                
                
          }
           j++;
            
           

                
        }
        return ans;
    }
};
