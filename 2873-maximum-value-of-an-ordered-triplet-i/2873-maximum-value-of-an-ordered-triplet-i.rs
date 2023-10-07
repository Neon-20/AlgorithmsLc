impl Solution {
    pub fn maximum_triplet_value(nums: Vec<i32>) -> i64 {
       let n = nums.len();
       let mut ans:i64 = 0;
        
       for i in 0..n{
           for j in (i+1)..n{
               for k in (j+1)..n{
                   let triplet_val = (nums[i]-nums[j]) as i64 * nums[k] as i64;
                   ans=ans.max(triplet_val);
               }
           }
        }
        ans
    }
}