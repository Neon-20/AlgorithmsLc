/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function(n, k) {
    vec = [];
    for(let i=1;i<=n;i++){
        if(n%i == 0) {
            vec.push(i);
        }
    }
    if(k>vec.length) return -1;
    else return vec[k-1];
};