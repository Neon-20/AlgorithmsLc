class NumArray {
public:
    // vector<int> ;
    NumArray(vector<int>& nums)  {
        // partial_sum(nums.begin(),nums.end(),psum.begin()+1);
        ans=nums;
        for(int i=1;i<size(nums);i++){
            ans[i]=nums[i]+ans[i-1];
        }
    }
    
    int sumRange(int left, int right) {
       if(left==0) return ans[right];
        return ans[right]-ans[left-1];
    }
    private:
    vector<int> ans;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */