class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        //longest mountain in array
        // length of longest subarray
       vector<int> prefix(n,0);
       vector<int> suffix(n,0);
        for(int i=0;i<n;i++){
            if(i>0 and arr[i]>arr[i-1])
                prefix[i]=prefix[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
           if(arr[i]>arr[i+1])
               suffix[i]=suffix[i+1]+1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(prefix[i]!=0 and suffix[i]!=0){
                ans=max(ans,prefix[i]+suffix[i]+1);
            }
        }
        return ans;
    }
};