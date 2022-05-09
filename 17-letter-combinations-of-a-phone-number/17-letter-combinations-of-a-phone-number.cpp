class Solution {
public:
    vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;

    void recur(string &s,int index,string comb){
       if(index == s.size()){
         ans.push_back(comb);
           return;
       }
        for(auto x:mappings[s[index]-'2']){
            comb.push_back(x);
            recur(s,index+1,comb);
            comb.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(digits == "") return ans;
        string combinations="";
        recur(digits,0,combinations);
        return ans;
    }
};