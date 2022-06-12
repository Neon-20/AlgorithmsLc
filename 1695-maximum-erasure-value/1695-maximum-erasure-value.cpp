class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    //set always
        int n=size(nums);
        set<int> s;
        int i=0;
        int j=0;
        int current_sum=0;
        int mx_sum=0;
        while(i<n and j<n){
            if(!s.count(nums[j])){
                s.insert(nums[j]);
                current_sum+=nums[j];
                mx_sum=max(mx_sum,current_sum);
                j++;
            }
            else{
                current_sum-=nums[i];
                s.erase(nums[i]);
                i++;
            }
        }
        return mx_sum;
    }
};