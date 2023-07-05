
class Solution {
public:
    #define ll long long
    long long continuousSubarrays(vector<int>& nums) {
       multiset<int> s;
        long long ans=0;
        for (int i=0, j=0; i<nums.size(); ++i) {
            s.insert(nums[i]);
            while(*s.rbegin()-*s.begin()>2) {
                s.erase(s.find(nums[j++]));
            }
            ans+=i-j+1;
        }
        return ans;
    }
};