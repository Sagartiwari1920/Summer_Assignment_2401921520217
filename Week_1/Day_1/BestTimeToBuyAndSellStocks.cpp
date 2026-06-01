class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int minp=prices[0];
        int maxprof=0;
       for(int price:prices)
       {
        minp=min(minp,price);
        maxprof=max(maxprof,price-minp);
       }
 return maxprof;

    }
};