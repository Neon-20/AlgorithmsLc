/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let str = String(x);
    const y = str.split("").reverse().join("");
    // console.log(y);
    if(x == y) return true;
    else return false;
};