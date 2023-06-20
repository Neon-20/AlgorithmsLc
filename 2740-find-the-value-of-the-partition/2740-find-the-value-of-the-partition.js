/**
 * @param {number[]} nums
 * @return {number}
 */

function findValueOfPartition(nums){
    nums.sort((a,b)=>a-b);
    //find min difference among them
    let ans = Number.MAX_SAFE_INTEGER;
    for(let i=1;i<nums.length;i++){
        ans=Math.min(ans,nums[i]-nums[i-1]);
    }
    return ans;
}