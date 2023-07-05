/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let n=nums.length;
    let cnt=0;
    let ans=0;
    for(let i=0;i<n;i++){
        if(nums[i]===0){
            cnt=0;
        }
        else{
            cnt++;
        }
        ans=Math.max(ans,cnt);
    }
    return ans;
};