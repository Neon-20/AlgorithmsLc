class Solution {
public:
    long long appealSum(string s) {
       //Just traverse in each string and calculate 
        //the substring which has unique letter
        //Using dp
        long long res=0;
        long long current=0;
        int previous[26]={};
        for(int i=0;i<s.length();i++){
        current+=i+1-previous[s[i]-'a'];   
        previous[s[i]-'a']=1+i;    
        res+=current;
        }
        return res;
        
    }
};