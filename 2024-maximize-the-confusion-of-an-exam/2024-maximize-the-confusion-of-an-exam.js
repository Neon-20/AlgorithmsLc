/**
 * @param {string} answerKey
 * @param {number} k
 * @return {number}
 */

function maxConsecutiveAnswers(nums,k){
 let n = nums.length;
 let t=0,f=0;
    let j=0;let ans=0;
    for(let i=0;i<n;i++){
        nums[i]=='T'?t++:f++;
        if(Math.min(f,t)<=k) ans++;
        else nums[j++]=='T'?t--:f--;
    }
    return ans;
}

// TTFF