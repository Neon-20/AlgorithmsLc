/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
	return async function(...args){
        const old1 = fn(...args)
      const new1 = new Promise(function(resolve,reject){
            setTimeout(()=>{
                reject("Time Limit Exceeded")
            },t)
        })
      return Promise.race([old1,new1]);
    }
};


// const limited = timeLimit((t) 
// =>
//  new Promise(res => setTimeout(res, t)), 100);
/**
 * 
//  * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */