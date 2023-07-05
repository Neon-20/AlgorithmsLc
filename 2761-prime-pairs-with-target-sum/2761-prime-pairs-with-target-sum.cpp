class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> primes(n+1);
        for(int i=2;i<=n;i++){
            if(!primes[i]){
                for(int j=2*i;j<=n;j+=i){
                    primes[j]=true;
                }
            }
        }
        vector<vector<int>> ans;
        for(int i=2;i<=n/2;i++){
            if(!primes[i]){
                int key=n-i;
                if(key>1 and !primes[key]){
                    ans.push_back({i,key});
                }
            }
        }
        return ans;
    }
};