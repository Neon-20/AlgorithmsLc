/**
 * @param {number} millis
 */
 //Write a function which sleeps for certain amount of time.
async function sleep(millis) {
 return new Promise (function(resolve){
        setTimeout(()=>{
            resolve();
        },millis)
    })
}


/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */