class Solution {
public:
    //The big question remains whether we could split nums
    //into n group where max size shd be <=m
  int cansplit(int largest,vector<int> &nums,int m){
      int currentsum=0;
      int subarray=0;
      for(int x:nums){
          currentsum+=x;
          if(currentsum>largest){
              subarray++;
              currentsum=x;
          }
      }
      return subarray+1<=m;
  }
    int splitArray(vector<int>& nums, int m) {
      int sum=0;
        int mxlocal=INT_MIN;
        int n=size(nums);
        for(int i=0;i<n;i++){
            mxlocal=max(mxlocal,nums[i]);
            sum+=nums[i];
        }
        //Binary search on the values in range mxlocal to sum
        while(mxlocal<sum){
            int mid=mxlocal+(sum-mxlocal)/2;
            if(cansplit(mid,nums,m)){
                sum=mid;
            }
            else mxlocal=mid+1;
        }
        return mxlocal;
    }
};