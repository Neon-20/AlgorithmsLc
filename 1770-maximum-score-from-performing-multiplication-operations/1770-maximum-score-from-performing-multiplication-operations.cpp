class Solution {
public:
    int cache[1001][1001];
    //reduce it into 2d dp, picking elements from left and right
    int solve(int left,int idx,vector<int> &nums, vector<int> &mul){
        if(idx == size(mul)) return 0;
        if(cache[left][idx]!=-1) return cache[left][idx];
        int pickleft=solve(left+1,idx+1,nums,mul)+nums[left]*mul[idx];
        int right=solve(left,idx+1,nums,mul)+nums[size(nums)-(idx-left)-1]*mul[idx];
       return cache[left][idx]=max(pickleft,right);
       
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        // choosing the integers is the key to the problem
        int n=size(nums);
        int m=size(mul);
        memset(cache,-1,sizeof(cache));
        return solve(0,0,nums,mul);
        
    }
};