class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        double sum=0;
        double ans=INT_MIN;
        while(j<n)
        {
            sum=sum+nums[j];
            double avg=sum/(j-i+1);
            if((j-i+1)<k)
            j++;
            else if((j-i+1)==k)
            {
               ans=max(avg,ans);
               sum=sum-nums[i];
               i++;
               j++; 
            }
        }
        return round(ans*1e5)/1e5;
    }
};
