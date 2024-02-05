class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int sum =0;
        for(int x:nums){
            sum+=x;
            if(sum == 0){
                cnt++;
            }
        }
        return cnt;
    }
};