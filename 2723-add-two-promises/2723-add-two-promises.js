/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
async function addTwoPromises(p1, p2) {
    return await p1 + await p2;
}

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */