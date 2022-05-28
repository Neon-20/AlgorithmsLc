class Solution {
public:
    int cache[1001][1001];
    //reduce it into 2d dp, picking elements from left and right
    int solve(int left,int idx,vector<int> &nums,vector<int> &mul){
        int n=size(nums);
       if(idx == size(mul)) return 0;
        if(cache[left][idx]!=-1) return cache[left][idx];
        int score=0;
        int pickleft=solve(left+1,idx+1,nums,mul)+nums[left]*mul[idx];
int right=solve(left,idx+1,nums,mul)+nums[n-(idx-left)-1]*mul[idx];
        score=max(pickleft,right);
        cache[left][idx]=score;
        return score;
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        // choosing the integers is the key to the problem
      int n=nums.size();
      int m=nums.size();
        memset(cache,-1,sizeof(cache));
        return solve(0,0,nums,mul);
    }
};