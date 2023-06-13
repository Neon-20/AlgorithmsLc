/**
 * @param {number} n
 * @return {Function} counter
 */
// const createCounter = function(n){
//     return function(...args){
//         return n++;
//     }
// }

const createCounter = function(n){
    return function(...args){
       return n++
    }
}



/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */