impl Solution {
    pub fn arithmetic_triplets(nums: Vec<i32>, diff: i32) -> i32 {
        let mut cnt:i32 = 0;
        let n = nums.len();
        for i in 0..n{
            for j in (i+1)..n{
                for k in (j+1)..n{
        if nums[j] - nums[i] == diff && diff == nums[k] - nums[j]{
                        cnt=cnt+1;
                    }
                }
            }
        }
        cnt
    }
}