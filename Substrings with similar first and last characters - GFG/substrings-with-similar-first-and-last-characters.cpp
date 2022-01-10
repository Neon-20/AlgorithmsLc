// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    int cnt[26]={};
	    int n=s.size();
	    for(int i=0;i<n;i++){
	        cnt[s[i]-'a']++;
	    }
	    int res=0;
	    for(int i=0;i<26;i++)
	    {
	        res+=(cnt[i]*(cnt[i]+1))/2;
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   	    Solution ob;

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends