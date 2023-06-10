/**
 * @param {string} s
 * @return {number}
 */
var secondsToRemoveOccurrences = function(s) {
    let ans=0;
    while(s.indexOf("01")!=-1){
        s=s.replaceAll("01","10")
        ans++;
    }
    return ans;
};