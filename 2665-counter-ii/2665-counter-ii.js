/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

const createCounter = (init) =>{
 let count = init
function increment(){
    return ++count
 }
function decrement(){
    return --count
 }
function reset(){
    count=init
    return count
 }
    return {
        increment,decrement,reset
    }
}


/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */