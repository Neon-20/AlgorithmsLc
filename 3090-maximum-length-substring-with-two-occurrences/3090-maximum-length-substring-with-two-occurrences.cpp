class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
       //2 pointers approach 
        int ans = 0;
        int arr[26] = {0};
        int j=0;
        for(int i=0;i<n;i++){
            while(arr[s[i]-'a']>=2){
                arr[s[j]-'a']--;
                j++;
            }
            arr[s[i]-'a']++;
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};

 