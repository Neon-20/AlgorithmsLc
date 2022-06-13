class Solution {
public:
    #define ll long long
    const ll mod=1e9+7;
   void add(ll& p, ll a) {
    p += a;
    if(p >= mod) p -= mod;
}
    int maxSum(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        ll a_sum=0,b_sum=0;//segment sums of both
        ll ans=0;
        while(i<n and j<m){//2 pointers approach
            if(a[i]<b[j]){
                a_sum+=a[i];
                i++;
            }
            else if(b[j]<a[i]){
                b_sum+=b[j];
                j++;
            }
            else{//both equal
                ans+=max(a_sum,b_sum)+a[i];
                a_sum=0;
                b_sum=0;
                j++;i++;
            }
        }
        while(i<n){
            a_sum+=a[i];
            i++;
        }
        while(j<m){
            b_sum+=b[j];
            j++;
        }
       ans=(ans+max(a_sum,b_sum))%mod;
        return ans;
    }
};
  








