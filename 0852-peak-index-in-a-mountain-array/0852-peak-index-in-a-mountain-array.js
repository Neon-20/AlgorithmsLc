/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(nums) {
    let n = nums.length;
    //Find the first a[i] > a[i+1];
    for(let i=0;i<n;i++){
        if(nums[i]>nums[i+1]){
            return i;
        }
    }
    return -1;
};

//  2 5 