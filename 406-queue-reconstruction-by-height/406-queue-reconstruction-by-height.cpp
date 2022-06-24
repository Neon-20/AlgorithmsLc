class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people){
     int n=people.size();
        sort(people.begin(),people.end(),[](auto a,auto b){
            if(a[0]!=b[0]) return a[0]>b[0];
            else return a[1]<b[1];
        });
        vector<vector<int>> res;
        for(auto x:people){
            res.insert(res.begin()+x[1],x);
        }
        return res;
    }
};