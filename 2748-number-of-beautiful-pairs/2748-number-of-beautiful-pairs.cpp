class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        //find the co-prime pairs in this
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(__gcd(to_string(nums[i])[0]-'0',nums[j]%10) == 1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};