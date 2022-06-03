class NumArray {
public:
    // vector<int> ;
    NumArray(vector<int>& nums) :psum(size(nums)+1,0) {
        partial_sum(nums.begin(),nums.end(),psum.begin()+1);
        
    }
    
    int sumRange(int left, int right) {
        return psum[right+1]-psum[left];
    }
    private:
    vector<int> psum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */