class Solution {
public:
   
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //queue reconstruction
         sort(begin(people),end(people),comp);
        vector<vector<int>> res;
        for(auto &x:people){
            res.insert(begin(res)+x[1],x);
        }
        return res;
    }
         static bool comp(vector<int> &p1,vector<int> &p2){
        if(p1[0]!=p2[0]) return p1[0]>p2[0];
        else return p1[1]<p2[1];
    
    }
};