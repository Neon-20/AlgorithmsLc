/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
 let i=0;
    let j;
    for(j=0;j<nums.length;j++){
        if(nums[j]==0) k--;
        if(k<0 && nums[i++]==0) k++;
    }
    return j-i;
};