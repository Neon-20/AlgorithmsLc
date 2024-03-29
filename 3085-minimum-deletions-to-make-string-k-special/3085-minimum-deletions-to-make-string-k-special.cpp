class Solution {
public:
    int minimumDeletions(string word, int k) {
        int n = word.size();
        vector<int> a(26,0);
        for(auto x:word){
            a[x-'a']++;//count frequencies over here
        }
        sort(begin(a),end(a));
        //min characters to delete
        int ans = word.size();
        int sum = 0;
        for(int i=0;i<26;i++){
           if(a[i] == 0) continue;
            int total = sum;
            for(int j=i+1;j<26;j++){
                total+=max(0,a[j]-a[i]-k);
            }
            ans = min(ans,total);
            sum+=a[i];
        }
        return ans;
    }
};
