/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function(nums) {
    let n=nums.length;
    nums.sort((a,b)=>b-a);
    console.log(nums);
    // let i=0;
    for(i=0;i<n;i++){
        if(nums[i]<i+1) 
            return i;
    }
    return i;
};
//ooo like this
// 6 5 3 1 0
//   
