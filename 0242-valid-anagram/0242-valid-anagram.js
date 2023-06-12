/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let n=s.length;
    let m=t.length;
    const sorted1 = s.split('').sort().join('')
    const sorted2 = t.split('').sort().join('')
    // console.log(sorted1,sorted2)
     if(sorted1 === sorted2) return true;
     else return false
};