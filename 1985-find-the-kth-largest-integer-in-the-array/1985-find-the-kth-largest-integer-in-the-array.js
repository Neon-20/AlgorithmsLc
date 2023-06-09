/**
 * @param {string[]} nums
 * @param {number} k
 * @return {string}
 */
var kthLargestNumber = function(nums, k) {
   return nums.sort( (a,b) => {
       const diff=BigInt(b)-BigInt(a)
       if(diff>0) return 1;
    else if(diff<0) return -1;
       return 0;
    })[k-1];
};