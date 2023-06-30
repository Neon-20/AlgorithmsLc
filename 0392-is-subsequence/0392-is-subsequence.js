/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
function isSubsequence(s,t){
    let cnt=0;
    for(let i=0;i<t.length;i++){
        if(t[i] === s[cnt]) cnt++;
    }
    return cnt === s.length;
}