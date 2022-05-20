class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=size(prices);
        int profit=0;
        int ans=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1])
                profit+=(prices[i]-prices[i-1]);
                ans=max(ans,profit);
        }
        return ans;
    }
};