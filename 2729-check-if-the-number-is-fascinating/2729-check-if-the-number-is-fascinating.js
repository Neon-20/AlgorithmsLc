/**
 * @param {number} n
 * @return {boolean}
 */
var isFascinating = function(n) {
    const val1 = 2*n
    const val2 = 3*n
    const a = n.toString()
    const b = val1.toString()
    const c = val2.toString()
    const x = a.split("")
    const y = b.split("")
    const z = c.split("")
    const ans = x.concat(y.concat(z))
    // console.log(ans)
    ans.sort()
    const why = ans.join("")
    return why === "123456789"
    // return ans === "123456789"
};