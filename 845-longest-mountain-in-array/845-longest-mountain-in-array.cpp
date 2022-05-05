class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n=a.size();
        //longest mountain in array
        // length of longest subarray
      vector<int> prefix(n);
      vector<int> suffix(n);
        for(int i=0;i<n;i++){
           if(i>0 and a[i]>a[i-1]) prefix[i]=prefix[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1])suffix[i]=suffix[i+1]+1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(prefix[i] and suffix[i])
                ans=max(ans,prefix[i]+suffix[i]+1);
        }
        return ans;
    }
};