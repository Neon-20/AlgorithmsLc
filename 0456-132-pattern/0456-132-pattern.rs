impl Solution {
    pub fn find132pattern(nums: Vec<i32>) -> bool {
    // let n = nums.len();
    let mut s3 = i32::MIN;
    let mut stack: Vec<i32> = Vec::new();
    for &num in nums.iter().rev(){
        if num<s3 {return true;}
        else
        {while !stack.is_empty() && num>*stack.last().unwrap(){
            s3 = stack.pop().unwrap();
        }
        stack.push(num);
        }
    }
        false
        
    }
}