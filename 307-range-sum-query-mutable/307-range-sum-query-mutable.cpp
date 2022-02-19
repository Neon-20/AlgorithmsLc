class NumArray {
    vector<int> BIT;
    void updateBIT(int i,int val)
    {
        for(;i<BIT.size();i+=i&(-i))
            BIT[i]+=val;
    }
    int sum(int i)
    {
        int ans=0;
        for(;i>0;i-=i&(-i))
            ans+=BIT[i];
        return ans;
    }
public:
    NumArray(vector<int>& nums) {
        BIT=vector<int> (nums.size()+1,0);
       for(int i=0;i<nums.size();i++)
         updateBIT(i+1,nums[i]);
    }
    
    void update(int index, int val) {
        updateBIT(index+1,val-sumRange(index,index));
    }
    
    int sumRange(int left, int right) {
       return sum(right+1)-sum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */