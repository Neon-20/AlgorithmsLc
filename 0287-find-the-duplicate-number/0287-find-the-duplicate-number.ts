function findDuplicate(nums: number[]): number {
    let n = nums.length;
    nums.sort((a,b) => a-b);
    for(let i=1;i<n;i++){
        if(nums[i-1]==nums[i]) return nums[i];
    }
    return -1;
};