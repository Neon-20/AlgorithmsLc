impl Solution {
    pub fn find132pattern(nums: Vec<i32>) -> bool {
     let mut store = i32::MIN;
     let mut st: Vec<i32> = Vec::new();
     for &num in nums.iter().rev(){
         if num < store {
             return true;
         }
         else{
             while !st.is_empty() && num > *st.last().unwrap(){
                 store = st.pop().unwrap();
             }
             st.push(num)
         }
        }
        false
    }
}