class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //return all possible combinations
        //in other question it was ro find total number of combinations
        //2 to 9
        // An iterative approach would be
        vector<string> ans;
        string given[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ans.push_back("");
         if(digits.empty()) return {};
        for(int i=0;i<digits.size();i++){
            vector<string> temp;
            string chars=given[digits[i]-'0'];
            for(int i=0;i<chars.size();i++)
                for(int j=0;j<ans.size();j++)
                    temp.push_back(ans[j]+chars[i]);
            ans=temp;
        }
        return ans;
    }
};