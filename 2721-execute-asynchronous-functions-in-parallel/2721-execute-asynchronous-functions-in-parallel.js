/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
async function promiseAll(array) {
    const result = [];
    let resolvedCount = 0;
    if(array.length == 0){
        return Promise.resolve(array);
    }
    return new Promise(function(resolve,reject){
        array.forEach((func,index)=>{
            func().
            then((res)=>{
                result[index]=res;
                resolvedCount++;
                if(resolvedCount == array.length){
                    resolve(result);
                }
            })
            .catch((err)=>{
                reject(err);
            })
        })
    })
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */