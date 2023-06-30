/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    //ok remove space and special characters
    const ans = s.replace(/[^A-Za-z0-9]/g,"").
    toLowerCase();
    const res = s.replace(/[^A-Za-z0-9]/g,"").
    toLowerCase().split("").reverse().join("");
   
    if(ans === res) return true;
    else return false;
};