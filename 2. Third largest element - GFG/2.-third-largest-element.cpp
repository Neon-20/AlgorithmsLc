// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        int first=-1;
        int second=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            if(a[i]>first) first=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>second and a[i]<first) second=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>last and a[i]<second) last=a[i];
        }
        return last;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends