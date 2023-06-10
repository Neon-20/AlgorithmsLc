/**
 * @param {string} s
 * @return {number}
 */
var partitionString = function(s) {
    let n=s.length;
    //optimal partition of the string
    //keep creating the set whenever u get opportunity
    //that means if repeating
    
    st = new Set()
    let cnt=1;
    for(let i=0;i<s.length;i++){
        if(!st.has(s[i])){
            st.add(s[i])
        }
        else{
            cnt++;
            st = new Set(s[i]);
        }
    }
    return cnt;
};
  