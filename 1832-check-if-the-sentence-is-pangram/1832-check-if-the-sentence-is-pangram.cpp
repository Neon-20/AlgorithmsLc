class Solution {
public:
    bool checkIfPangram(string sentence) {
    set<int> s;
        for(auto x:sentence){
            s.insert(x);
        }
        return s.size() == 26;
    }
};