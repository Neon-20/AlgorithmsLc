class Solution {
public:
    bool isValid(string s) {
        // string ans="";//empty string
        
        vector<int> v;
        for(char c:s){
            if(c == 'c'){
                int n=v.size();
                if(n<2 or v[n-1]!='b' or v[n-2]!='a') return false;
                v.pop_back();
                v.pop_back();
            }
            else {
                v.push_back(c);
            }
        }
        return v.empty();
    }
};