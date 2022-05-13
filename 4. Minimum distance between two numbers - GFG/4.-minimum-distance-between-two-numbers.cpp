// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        //min distance between 2 numbers
        //ok got it
        int at=-1;
        int b=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i] == x){
                at=i;
            }
            if(a[i] == y){
                b=i;
            }
            if(at!=-1 and b!=-1){
                mn=min(mn,abs(at-b));
            }
        }
        if(at == -1 or b == -1) return -1;
        else return mn;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends