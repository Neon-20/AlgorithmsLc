/**
 * @param {number[][]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function(intervals) {
    let n = intervals.length;
    intervals.sort((a,b)=>a[1]-b[1]);
    let remove=0;
    let pre=intervals[0];
    for(let i=1;i<intervals.length;i++){
        if(intervals[i][0]<pre[1]) remove++;
        else pre=intervals[i];
    }
    return remove;
};