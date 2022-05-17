class Solution {
public:
    int thirdMax(vector<int>& a) {
      vector<int> ans;
        int n=a.size();
        sort(a.rbegin(),a.rend());//
       ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                ans.push_back(a[i]);
            }
        }
        if(ans.size()<3){
            return ans[0];
        }
        else return ans[2];
        
    }
};