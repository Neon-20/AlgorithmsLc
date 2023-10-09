class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int res = -1;
        while(l<=r){
            int mid = l + (r-l) / 2; 
            if(nums[mid] == target){
                res = mid;
                r = mid-1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else l = mid+1;
        }
        ans.push_back(res);
        l = 0,r = n-1;
        res = -1;
        while(l<=r){
            int mid = l + (r-l) / 2; 
            if(nums[mid] == target){
                res = mid;
                l = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else l = mid+1;
        }
        ans.push_back(res);
        return ans;
    }
};




