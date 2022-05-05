class Solution {
public:
    

    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        // Lis from left side
       vector<int> lisleft(n,1);
       vector<int> lisright(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lisleft[i]=max(lisleft[i],lisleft[j]+1);
                }
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>=i;j--){
                if(nums[i]>nums[j]){
                    lisright[i]=max(lisright[i],lisright[j]+1);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
           if(lisleft[i]>1 and lisright[i]>1)
               ans=max(ans,lisleft[i]+lisright[i]-1);
        }
        return n-ans;
        
    }
};