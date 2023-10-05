/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
   let n = nums.length;
   let mp = new Map();
   for(const x of nums){
       if(mp.has(x)){
           mp.set(x,mp.get(x)+1);
       }
       else{
           mp.set(x,1);
       }
   }
    let ans = [];
    const vals = Math.floor(n/3);
    for(const [key,value] of mp.entries()){
        if(value>vals){
            ans.push(key);
        }
    }
    return ans;
};




