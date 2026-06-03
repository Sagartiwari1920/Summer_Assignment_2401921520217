class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int water =INT_MIN;
        int left=0;
        int right =n-1;
        while(left<=right)
        {
            int area=(right-left)*min(height[left],height[right]);
             water=max(water,area);
            if(height[left]<=height[right])
            left++;
            else if(height[left]>=height[right])
            right--;
        }
        return water;
    }
};
