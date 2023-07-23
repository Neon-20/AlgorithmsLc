/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    // direct string to integer conversion
return Math.max(Math.min(parseInt(s)||0,2147483647),-2147483648)
};