class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        //Number of substrings containing all three characters
         vector<int> ans(3,-1);
        int res=0;
        for(int i=0;i<n;i++){
            ans[s[i]-'a']=i;
            res+=1+min({ans[0],ans[1],ans[2]});
        }
        return res;
        
    }
};