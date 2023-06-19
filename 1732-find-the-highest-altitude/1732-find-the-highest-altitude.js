/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    //find the highest altitude
    let n=gain.length;
    let prev = 0;
    const res = [];
    res.push(0);
    for(let i=0;i<n;i++){
        prev = prev+gain[i];
        res.push(prev);
    }
    const ans = Math.max(...res);
    return ans;
};
-5,1,5,0,-7
-5,-4,1,1,-6