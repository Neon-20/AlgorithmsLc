class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //queue reconstruction
        sort(begin(people),end(people),[&](auto a,auto b){
            if(a[0] != b[0])
                return a[0]>b[0];
            else return a[1]<b[1];
        });
        vector<vector<int>> ans;
        for(auto x:people){
            ans.insert(ans.begin()+x[1],x);
        }
        return ans;
    }
};