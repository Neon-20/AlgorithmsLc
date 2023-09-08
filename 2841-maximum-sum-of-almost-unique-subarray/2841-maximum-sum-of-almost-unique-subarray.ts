function maxSum(nums: number[], m: number, k: number): number {
  let left = 0;
  let sum = 0;
     let freq = new Map();
    let maxSum = 0;
    for(let j=0;j<nums.length;j++){
     if (!freq.has(nums[j])) {
      freq.set(nums[j], 0);
    }
    freq.set(nums[j], freq.get(nums[j]) + 1);
        sum+=nums[j];
        while(j-left+1>k){
            freq.set(nums[left], freq.get(nums[left]) - 1);
            if(freq.get(nums[left]) === 0){
                freq.delete(nums[left]);
            }
            sum-=nums[left];
            left++;
        }
  let size = freq.size;
        if(size >= m){
            maxSum = Math.max(maxSum,sum);
        }
    }
    return maxSum;
};
// only choose the k elements and keep sliding 
