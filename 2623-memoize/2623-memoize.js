/**
 * @param {Function} fn
 */
 //wrapper function for the above function
 //higher order function
 // add state to the solution
 //only use strings as a key for the hashmap
 //hashmap a.k.a object
function memoize(fn){
    const cache = {}
    //cache bas key ko check krega
    return function(...args){
    const key = JSON.stringify(args)
    if(key in cache){
        return cache[key]
    }
         return cache[key]=fn(...args)
}       
   

}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */