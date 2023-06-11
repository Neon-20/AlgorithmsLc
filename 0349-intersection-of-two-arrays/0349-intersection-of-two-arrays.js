/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    st = new Set();
    st2 = new Set();
    for(let i =0;i<nums1.length;i++) st.add(nums1[i])
    for(let i =0;i<nums2.length;i++) st2.add(nums2[i])
    // console.log(st,st2)
    const arr1 = Array.from(st);
    const arr2 = Array.from(st2);
    const ans = []
    for(let value of arr1){
        if(arr2.includes(value)){
            ans.push(value);
        }
    }
    return ans;
};