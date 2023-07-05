/**
 * @param {string} answerKey
 * @param {number} k
 * @return {number}
 */

function cnt(nums,k,c){
  let count=0;
    let ans=0;
    let i=0;
  for(let j=0;j<nums.length;j++){
      count+=nums[j]==c;
      while(count>k) count-=nums[i++]==c;
      ans=Math.max(ans,j-i+1);
  }
    return ans;
}
function maxConsecutiveAnswers(nums,k){
    return Math.max(cnt(nums,k,'T'),cnt(nums,k,'F'))
}