#define ll              long long 
#define tcT             template<class T
#define each(a,x)       for (auto& a: x)
#define sz(x)          (int)(x.size())
#define ff               first
#define present(ab,cd)   ((ab).find((cd)) != (ab).end()
#define endl             "\n"
#define pii              pair<int,int> 
#define lld              long double
#define eb               emplace_back
#define ss               second
#define all(a)            a.begin(),a.end()
#define loop(i,a,n)      for(int i=a;i<n;i++)
#define rloop(i,a,n)     for(int i=a;i<=n;i++)
#define loopl(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define loopr(i,a,b)     for(int i=(int)a-1;i>=(int)b;i--)
#define INF              (1LL<<61)-1
#define pb               push_back
#define bpc(a)           __builtin_popcountll(a)
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& nums) {
       //max number of courses that i can take
        int n=sz(nums);
        priority_queue<int> pq;
        sort(all(nums),[&](vector<int> &a,vector<int> &b){
           return a[1]<b[1]; 
        });//2nd param sorted
        int time=0;
      for(auto x:nums){
          time+=x[0];
          pq.push(x[0]);
          if(time>x[1]){
              time-=pq.top();
              pq.pop();
          }
      }
        return sz(pq);
    }
};




