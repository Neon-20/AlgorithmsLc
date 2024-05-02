class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        //integer added to array
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        //ab difference
        int ans = 0;
        for(int i=0;i<n;i++){
            ans=nums2[i]-nums1[i];
        }
        return ans;
    }
};
// 2 4 6
// 5 7 9