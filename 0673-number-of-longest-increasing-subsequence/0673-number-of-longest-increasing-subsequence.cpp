class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        //finding the number of longest increasing subs
        int n=size(nums);
        vector<int> length(n,1);//maintain the length
        vector<int> cnt(n,1);//maintain the cnt
        int max_length=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(length[j]+1>length[i]){
                        length[i]=length[j]+1;
                          cnt[i]=cnt[j];
                    }
                    else if(length[i]==length[j]+1){
                        cnt[i]+=cnt[j];
                    }
                }
            }
            max_length=max(max_length,length[i]);
        }
        //Now calculate the count
        int ans=0;
        for(int i=0;i<n;i++){
            if(length[i] == max_length)
            ans+=cnt[i];
        }
          return ans;  
    }
};