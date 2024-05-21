class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        //jo bhi letters exist krega others me bhi that is answer
        string prev = strs[0];
        for(int i=1;i<n;i++){
            while(strs[i].find(prev)!=0){
                prev = prev.substr(0,prev.length()-1);
                if(prev.length() == 0) return "";
            }
        }
        return prev;
    }
};