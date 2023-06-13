/**
 * @param {number} millis
 */
 //Write a function which sleeps for certain amount of time.
async function sleep(millis) {
  await new Promise(resolve=>{
      setTimeout(resolve,millis)
  })
}


/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */