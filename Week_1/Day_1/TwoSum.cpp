class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
         unordered_map<int,int>m;
         vector<int>ans;
         for(int i=0;i<n;i++)
         {
            m[nums[i]]=i;
         }

         for(int j=0;j<n;j++)
         {
            int key=target-nums[j];
            if(m.count(key)==1 && m[key]!=j)
            {
                return {m[key],j};
            }
           
            
         } 
         return {0,0};


            

    }
};