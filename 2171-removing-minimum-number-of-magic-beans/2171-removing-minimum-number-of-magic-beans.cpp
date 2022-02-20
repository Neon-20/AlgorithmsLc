class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        int n=beans.size();
        //Minimum removal of beans from the bag
        long long sum=0;
        sort(begin(beans),end(beans));// 1 4 5 6 
        for(auto &x:beans)
        {
            sum+=x;
        }
        // sum=16
        long long res=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            res=min(res,sum-1LL*(beans[i])*(n-i));
        }
        return res;
            
            
    }
};