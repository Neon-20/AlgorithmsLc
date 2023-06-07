/**
 * @param {string} s
 * @return {number}
 */

function minimizedStringLength(s){
     set=new Set();
        for(let value of s){
            set.add(value);
        }
        return set.size;
}