/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(x){
    const ans = {};
    for(let e of this){// e is value then
        const key = x((e));
        ans[key] ||= [];
        ans[key].push(e);
    }
    return ans;
}

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */