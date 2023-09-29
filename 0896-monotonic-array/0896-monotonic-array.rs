impl Solution {
    pub fn is_monotonic(nums: Vec<i32>) -> bool {
        let mut inc:bool = true;
        let mut dec:bool = true;
        let n = nums.len();
        for i in 0..n-1{
            if nums[i]>nums[i+1] {inc = false;}
            if nums[i]<nums[i+1] {dec = false;}
            if !inc && !dec{
                return false;
            } 
        }
        true
    }
}
