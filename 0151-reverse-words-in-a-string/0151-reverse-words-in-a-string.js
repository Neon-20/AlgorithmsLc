/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return s.split(" ").filter(x=>x.length!==0).reverse().join(" ");
};