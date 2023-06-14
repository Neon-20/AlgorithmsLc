/**
 * @param {Function} fn
 * @return {Function}
 */

const once = (fn) =>{
    let called=false;//using closures 
   return function(...args){
       if(!called){
           called=true;
           return fn(...args)
       }
   }
}

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */