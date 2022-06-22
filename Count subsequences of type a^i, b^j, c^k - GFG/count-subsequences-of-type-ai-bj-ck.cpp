// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    long long mod=1e9+7;
    int fun(string &s) {
        int n=s.length();
        //count subsequences of that length efficiently
        long long a=0,ab=0,abc=0;
        for(char x:s){
            if(x == 'a')
            a=(2*a+1)%mod;
            else if(x == 'b')
              ab=(2*ab+a)%mod;
            else abc=(2*abc+ab)%mod;
        }
        return (int)abc;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends