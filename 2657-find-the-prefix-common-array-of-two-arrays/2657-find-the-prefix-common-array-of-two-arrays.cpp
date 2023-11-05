class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       int n = A.size();
       int m = B.size();
       unordered_map<int,int> mp;
        int cnt = 0;
        vector<int> ans;
       for(int i=0;i<n;i++){
          mp[A[i]]++;
          if(mp[A[i]] == 2){
              cnt++;
          }
           mp[B[i]]++;
           if(mp[B[i]]==2) cnt++;
           ans.push_back(cnt);
       }
        return ans;
      
    }
};
