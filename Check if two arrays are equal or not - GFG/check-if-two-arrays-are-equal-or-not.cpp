// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++
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
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        // check if 2 arrays are equal
        sort(all(a));
        sort(all(b));
        int ok=1;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]) ok=0;
        }
        return ok;
    }
};










// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends