/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {// so star is generator function
    // let ans = [];
    let [a,b] = [0,1];
    while(true){
        yield a;
        let temp = a
        a = b
        b = temp + a
    }
    
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */