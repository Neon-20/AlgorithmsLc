/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
	return async function(...args) {
     const oldPromise = fn(...args)
     const newPromise =  new Promise((resolve,reject)=>{
           setTimeout(()=>{
              reject("Time Limit Exceeded")
           },t)
       })
    return Promise.race([oldPromise,newPromise])
    }
};


// const limited = timeLimit((t) 
// =>
//  new Promise(res => setTimeout(res, t)), 100);
/**
 * 
//  * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */