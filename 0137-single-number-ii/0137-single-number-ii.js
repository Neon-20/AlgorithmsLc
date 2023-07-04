/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
     let n=nums.length;
        let mp ={};
        for(let i=0;i<n;i++){
            mp[nums[i]] = mp[nums[i]]+1 || 1;
        }
     // console.log(mp);
        for(const key in mp){
            if(mp[key] == 1) return Number(key);
        }
    // console.log(mp);
        return -1;
};