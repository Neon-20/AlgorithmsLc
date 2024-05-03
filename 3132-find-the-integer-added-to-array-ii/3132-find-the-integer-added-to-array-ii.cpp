class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        int ans = 2e9;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                vector<int> current;
                for(int k=0;k<n;k++){
                    if(k!=i and k!=j)
                    current.push_back(nums1[k]);
                }
                int x = nums2[0]-current[0];
                bool bad = 0;
                for(int i=0;i<n-2;i++){
                    if(current[i]+x!=nums2[i]){
                        bad = 1;
                        break;
                    }
                }
                if(!bad) ans = min(ans,x);
            }
        }
        return ans;
    }
};
// 2 wale case me hgya
// 4 20
// set of 3-3
