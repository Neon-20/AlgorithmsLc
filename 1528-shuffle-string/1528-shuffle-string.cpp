class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<size(indices);i++){
            ans[indices[i]]=s[i];
        }
        return ans;
       
    }
};