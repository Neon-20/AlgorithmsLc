impl Solution {
    pub fn get_concatenation(mut nums: Vec<i32>) -> Vec<i32> {
      let n = nums.len();
      for i in 0..n{
          nums.push(nums[i]);
        }
       return nums;
    }
}
// data types in rust
// we dont hav string data type in rust

// i32 = integer of 32 bits
// i64 = integer of 64 bits
// bool = boolean
// char = character
