/**
 * @param {string} s
 * @return {number}
 */
function lengthOfLongestSubstring(s){
   let i=0;
    let j=0;
    let ans=0;
    st = new Set()
    let n =s.length
    while(i<n && j<n){
        if(!st.has(s[j])){
            st.add(s[j]);
            ans=Math.max(ans,st.size);
            j++;
        }
            else{
                st.delete(s[i])
                i++;
            }
    }
    return ans;
}