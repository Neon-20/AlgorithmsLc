class Solution {
public:
    int dp[101][25];
    int helper(int index,int num,string &s){
       if(index == s.size()){
           if(num%25==0) return 0;
           return 1e9;
       } 
        if(dp[index][num]!=-1) return dp[index][num];
        int digit = s[index]-'0';
        int dontpick  = 1+helper(index+1,num,s);
        int pick = helper(index+1,(num*10+digit)%25,s);
        return dp[index][num]=min(pick,dontpick);
    }
    int minimumOperations(string num) {
        // int n=num.size();
        memset(dp,-1,sizeof(dp));
       return helper(0,0,num);
    }
};
//make num special
//div by 25
