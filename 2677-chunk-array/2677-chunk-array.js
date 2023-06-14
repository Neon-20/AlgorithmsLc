/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
function chunk(arr,size)
{
    let ans =[];
    let index = 0
    while(index < arr.length){
        ans.push(arr.slice(index,index+size));
        index+=size;
    }
    return ans;
}