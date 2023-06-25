/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var longestString = function(x, y, z) {
    if(x === y) return 4*x+2*z;
    else return (2*Math.min(x,y)+2*(Math.min(x,y)+1)+2*z);
};