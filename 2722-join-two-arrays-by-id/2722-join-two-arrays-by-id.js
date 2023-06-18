/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
function join(arr1,arr2){
    let merged = [];
    let map={}
    
    for(const x of arr1){
        map[x.id] = x;
    }
      // console.log(map)
    for(const y of arr2){
        map[y.id] = {...map[y.id],...y}
    }
    merged = Object.values(map);
    // console.log(merged)
    merged.sort((a,b)=>a-b);
    return merged;
    
}