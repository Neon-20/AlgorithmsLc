class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people){
        int n=people.size();
     sort(begin(people),end(people),[&](vector<int> &a,vector<int> &b){
         if(a[0]!=b[0]){
             return a[0]>b[0];
         }
         else return a[1]<b[1];
     });
         vector<vector<int>> ans;
        for(auto x:people){
            ans.insert(ans.begin()+x[1],x);
        }
        return ans;
    }
};