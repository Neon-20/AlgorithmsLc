/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function(nums, k) {
    let n=nums.length
    nums.sort((a,b)=>a-b)
    nums.reverse();
    return nums[k-1]
};