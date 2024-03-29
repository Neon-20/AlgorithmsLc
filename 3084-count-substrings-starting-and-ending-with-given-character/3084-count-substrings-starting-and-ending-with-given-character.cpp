class Solution {
public:
    long long countSubstrings(string s, char c) {
       long long ans = 0;
       long long cnt = 0;
       for(auto x:s){
           if(x == c){
               cnt++;
           }
       }
        return 1ll*(cnt)*(cnt+1)/2;
    }
};
// start and end with c