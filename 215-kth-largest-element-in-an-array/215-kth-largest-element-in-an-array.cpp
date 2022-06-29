#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using omset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:

    int findKthLargest(vector<int>& a, int k) {
       omset<int> s;
        int n=a.size();
       for(int x:a){
       s.insert(x);
        }
 // debug(s);
      return *s.find_by_order(n-k);
    }
};
// 6 5 4 3 2 1 