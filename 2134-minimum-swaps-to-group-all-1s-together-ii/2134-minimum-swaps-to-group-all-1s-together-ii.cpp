class Solution {
public:
    int minSwaps(vector<int>& nums) {
     int n=nums.size();
    int ones=count(nums.begin(),nums.end(),1);
        //Maintain a sliding window ok yes
        // Dealing with circular arrays so append in new vector
        int mx=0;
        int var=0;
        vector<int> v(2*n);
        for(int i=0;i<n*2;i++)
        {
            v[i]=nums[i%n];
        }
        for(int i=0;i<2*n;i++)
        {
            if(i>=ones and v[i-ones] == 1) var--;
            if(v[i] == 1) var++;
            mx=max(mx,var);
        }
        return ones-mx;
    }
};