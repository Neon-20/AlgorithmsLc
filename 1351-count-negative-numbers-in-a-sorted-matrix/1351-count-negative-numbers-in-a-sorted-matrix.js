/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function(grid) {
   let cnt=0;
    for(let value of grid){
        for(let in_value of value){
            if(in_value<0) cnt++;
        }
    }
    return cnt;
};