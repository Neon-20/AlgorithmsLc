use std::cmp;
impl Solution {
    pub fn maximum_triplet_value(nums: Vec<i32>) -> i64 {
        let n = nums.len();
        let mut prefix = nums.clone();
        let mut suffix = nums.clone();
        //Now we have as 
        for i in 1..n{
            prefix[i] = cmp::max(prefix[i],prefix[i-1]);
        }
        for j in (0..n-1).rev(){
            suffix[j] = cmp::max(suffix[j],suffix[j+1]);
        }
        let mut ans:i64 = 0;
        for i in 1..n-1{
            let valuei = prefix[i-1] as i64;
            let valuej = nums[i] as i64;
            let valuek = suffix[i+1] as i64;
            ans = cmp::max(ans,(valuei-valuej)*valuek);
        }
        ans
    }
}