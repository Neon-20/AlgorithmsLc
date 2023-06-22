/**
 * @param {number[]} prices
 * @param {number} fee
 * @return {number}
 */
var maxProfit = function(prices, fee) {
    //best time to buy and sell stock
    let s0 = 0;
    let s1 = Number.MIN_SAFE_INTEGER;
    for(const x of prices){
        let temp = s0;
        s0 = Math.max(s0,s1+x);
        s1 = Math.max(s1,temp-x-fee);
    }
    return s0;
};