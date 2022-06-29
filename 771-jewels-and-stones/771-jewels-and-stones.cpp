class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     set<int> s(begin(jewels),end(jewels));
        int ans=0;
        for(char c:stones){
            if(s.count(c)) ans++;
        }
        return ans;
    }
};