class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> ans;
        int i=0;//two pointers1
        int j=s.length();
        for(int k=0;k<n;k++){
            if(s[k] == 'I'){// 0 1 
                ans.push_back(i);
                i++;// 1 
            }
            else if(s[k] == 'D'){ //4 3
                ans.push_back(j);
                j--;
            }
        } // 0 4 1 3 
        if(s[s.size()-1] == 'I'){
            ans.push_back(i);
        }
        else ans.push_back(j);
        return ans;
    }
};