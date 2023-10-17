class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        //lexicographically shortest string would be here as
        int n=s.size();
        vector<string> match;
        for(int i=0;i<n;i++){
            string current;
            int cnt=0;
            for(int j=i;j<n;j++){
                cnt+=s[j]=='1';
                current.push_back(s[j]);
                if(k == cnt){
                    match.push_back(current);
                    break;
                }
            }
        }
        if(match.size() == 0) return "";
        sort(match.begin(),match.end(),[](string a,string b){
        if(a.length()!=b.length()) return a.size()<b.size();
            return a<b;
        });
            return match[0];
    }
};




