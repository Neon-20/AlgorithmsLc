class Solution {
public:
    int minimumDifference(vector<int>& nums) {
      
        int n=nums.size()/2;
        vector<int> v[n+1];
        for(int i=0;i<(1<<n);i++){
            int ct=0;
            int summ=0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    ct++;
                    summ+=nums[j];
                }
                else
                    summ-=nums[j];
            }
            v[ct].push_back(summ);
        }
        for(int i=0;i<=n;i++)
            sort(v[i].begin(),v[i].end());
        int minn=1e9;
        for(int i=0;i<(1<<n);i++){
            int ct=0;
            int summ=0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    ct++;
                    summ+=nums[j+n];
                }
                else
                    summ-=nums[j+n];
            }
            int pos=lower_bound(v[n-ct].begin(),v[n-ct].end(),-summ)-v[n-ct].begin();
            if(pos<v[n-ct].size())
                minn=min(minn,abs(v[n-ct][pos]+summ));
            if(pos!=0){
                pos-=1;
                minn=min(minn,abs(v[n-ct][pos]+summ));
            }
        }
        return minn;
        
    }
};