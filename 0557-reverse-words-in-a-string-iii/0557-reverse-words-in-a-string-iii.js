/**
 * @param {string} s
 * @return {string}
 */

function reverseWords(s){
   let str = s.split(" ");
   let ans=[];
    for(let i=0;i<str.length;i++){
        ans.push(str[i].split("").reverse().join(""));
    }
    return ans.join(" ")
}