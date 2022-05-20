// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(begin(a),end(a));
   //We dont give a fuck about middle elements 
   //just we give a fuck about the last and first element
   int mn=INT_MAX;
   for(int i=0;i+m-1<n;i++){
       int difference=a[i+m-1]-a[i];
       if(mn>difference) mn=difference;
   }
   return mn;
   
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends