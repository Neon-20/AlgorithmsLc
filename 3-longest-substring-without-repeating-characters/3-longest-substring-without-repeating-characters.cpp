class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char> st;
        int i=0,j=0,ans=0;
        while(i<n and j<n){
            if(!st.count(s[j])){
                st.insert(s[j]);
                ans=max(ans,(int)st.size());
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};