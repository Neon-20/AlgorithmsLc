/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    const mergedArray = nums1.concat(nums2);
    mergedArray.sort((a,b)=>a-b);
    let middleIndex = Math.floor(mergedArray.length/2);
    if(mergedArray.length % 2 === 0) {
    return (mergedArray[middleIndex - 1] + mergedArray[middleIndex]) / 2;
  } else {
    return mergedArray[middleIndex];
  }
};