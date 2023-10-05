use std::collections::HashMap;

impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut mp = HashMap::new();
        
        for x in &nums {
            *mp.entry(x).or_insert(0) += 1;
        }
        
        let mut ans = Vec::new();
        let vals = n / 3;
        
        for (key, value) in mp {
            if value > vals {
                ans.push(*key);
            }
        } 
        ans
    }
}
