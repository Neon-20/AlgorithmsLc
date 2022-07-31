class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<string> result;
        
        vector<int> universal(26,0);
        
        for(auto a:words2){
            vector<int> temp(26,0);
            for(char ch:a){
                
                if(temp[ch-'a'] == universal[ch-'a']){
                    universal[ch-'a']++;
                    temp[ch-'a']++;
                }else{
                    temp[ch-'a']++;
                }
            }
        }
        
        
        for(auto wd:words1){
            int chk=1;
            vector<int> temp(26,0);
            for(char ch:wd){
                temp[ch-'a']++;
            }
            for(int i=0; i<26; i++){
                if(universal[i] > temp[i]){
                   chk = 0 ;
                }
            }
            
            if(chk){
               result.push_back(wd); 
            }
        }
        
        return result;
    }
};