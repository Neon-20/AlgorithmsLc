class Solution {
public:
    const int mod = 1e9+7;
    int countPairs(vector<int>& deliciousness) {
      unordered_map<int,int> mp;
        long long ans = 0;
       for(auto x:deliciousness){
           for(int i=1;i<=(1<<22);i*=2){
               if(mp.count(i-x)){
                   ans+=mp[i-x];
               }
           }
           mp[x]++;
       }
        return ans%mod;
        
    }
};
// 1,3 1,7 3,5 7,9