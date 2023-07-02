/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    let m1={};//cnt all s serially
    let m2={};//cnt all t 
    for(let i=0;i<s.length;i++){
        if(m1[s[i]]!==m2[t[i]]) return false;
        m1[s[i]]=i;
        m2[t[i]]=i;
    }
    console.log(m1);
    console.log(m2);
    return true;
};