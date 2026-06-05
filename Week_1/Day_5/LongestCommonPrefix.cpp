class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string temp;
        string ans;
        int a=0;
        for(int i=0;i<strs[0].size();i++)
        {
             temp=strs[0];
             char c=temp[a];
             temp.clear();
             int count=0;
             for(int j=1;j<n;j++)
             {
                if(a<strs[j].size())
                temp=strs[j];
                else 
                break;

               if(c==temp[a])
               {
                count++;
                temp.clear();
               }
               else
               break;

             }
             if(count==n-1)
             {
                ans=ans+c;
                a++;
             }
             else
             break;
             
        }
        return ans;
        
    }
};
