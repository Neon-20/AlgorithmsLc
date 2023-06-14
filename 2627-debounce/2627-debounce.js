/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
function debounce(fn,t=1000) {
    let timer; // using closures
     return function(...args){
      clearTimeout(timer);
      timer = setTimeout(()=> fn(...args),t)
  }
}

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */