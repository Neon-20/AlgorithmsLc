/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    let n = height.length;
    let left = 0;
    let right = n-1;
    let maxLeft = height[left];
    let maxRight = height[right];
    let water = 0;
    if(n<3) return 0;
    while(left<right){
        if(maxLeft<maxRight){
            left++;
            maxLeft = Math.max(maxLeft,height[left]);
            water += maxLeft - height[left];
        }
        else{
            right--;
            maxRight = Math.max(maxRight,height[right]);
            water += maxRight - height[right];
        }
    }
    return water;
};