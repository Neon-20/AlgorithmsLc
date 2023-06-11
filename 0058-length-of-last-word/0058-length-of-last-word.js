/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    //length of last word
    let n=s.length
    const spl = s.split(" ")
    const result = spl.filter(x=>x.length !== 0)
    // console.log(result);
    return result.pop().length
};