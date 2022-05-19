class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto sentence:sentences){
            ans=max(ans,(int)count(begin(sentence),end(sentence),' ')+1);
        }
        return ans;
    }
};