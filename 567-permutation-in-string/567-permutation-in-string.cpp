class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        if(s1.size()>s2.size()) return false;
        int i;
        for(i=0;i<s1.size();i++)
        {
             cnt1[s1[i]-'a']++;//Count krlo pehle
             cnt2[s2[i]-'a']++;
        }
         if(cnt1 == cnt2) return true;
        int first=0;
        int end=i;
            while(end<s2.size())
            {
                --cnt2[s2[first]-'a'];
                ++cnt2[s2[end]-'a'];
                
                if(cnt1 == cnt2) return true;
                first++;end++;
                    
            }
        return false;
        
    }
};