/**
 * @param {string} s
 * @return {number}
 */
var longestSemiRepetitiveSubstring = function(s) {
    let n=s.length
    let cnt=0;
    let max=1;
    for(let i=0;i<n;i++){
        cnt=0;
        for(let j=i+1;j<n;j++){
            if(s[j-1] == s[j]){
                cnt++;
            }
            if(cnt<=1){
                max=Math.max(max,j-i+1);
            }
        }
    }
    return max;
};