/**
 * @param {string[]} words
 * @return {number}
 */
var maximumNumberOfStringPairs = function(words) {
    let n=words.length;
    s = new Set();
    let ans=0;
    for(const x of words){
       let y = x;
       let res = x.split("").reverse().join("");
       if(!s.has(res)){
           s.add(y);
       }
        else ans++;
    }
    return ans;
};