/**
 * @param {number[]} nums
 * @return {number}
 */
 function missingNumber(nums){
     // let ans = n;
    for(let i=0;i<=nums.length;i++){
        if(!nums.includes(i)){
            return i
        }
    }
 }