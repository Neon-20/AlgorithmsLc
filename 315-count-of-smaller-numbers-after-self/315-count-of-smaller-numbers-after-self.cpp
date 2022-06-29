#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using omset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
      int n=nums.size();
        omset<int> s;
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
            ans[i]=s.order_of_key(nums[i]);
            s.insert(nums[i]);
        }
        return ans;
    }
};