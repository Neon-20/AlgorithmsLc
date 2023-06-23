/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    for(let i=m,j=0;j<n;i++,j++){
        nums1[i]=nums2[j];
    }
   nums1.sort((a,b)=>a-b);
    return nums1;
};