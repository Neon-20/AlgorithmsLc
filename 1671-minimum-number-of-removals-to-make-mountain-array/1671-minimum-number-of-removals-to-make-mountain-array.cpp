class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        vector<int> b(n);
        vector<int> v;
        for(int i=0;i<n;i++){
            int x=nums[i];
            auto it=lower_bound(begin(v),end(v),x);
            a[i]=it-begin(v);
            if(it!=end(v)) *it=x;
            else v.push_back(x);
        }
        v.clear();
        for(int i=n-1;i>=0;i--){
            int x=nums[i];
            auto it=lower_bound(begin(v),end(v),x);
            b[i]=it-begin(v);
            if(it!=end(v)) *it=x;
            else v.push_back(x);
        }
        int ans=n;
        for(int i=1;i<n;i++){
            if(a[i] and b[i])
                ans=min(ans,n-(a[i]+1+b[i]));
        }
        return ans;
    }
};