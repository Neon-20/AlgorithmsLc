#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define omset tree<long long, null_type,less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update>
class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper)     {
     omset s;
long long pre=0,res=0;
s.insert(0);
for(int x:nums)
{
pre+=x;
res+=s.order_of_key(pre-lower+1)-s.order_of_key(pre-upper);
s.insert(pre);
}
return res;
    }
};



