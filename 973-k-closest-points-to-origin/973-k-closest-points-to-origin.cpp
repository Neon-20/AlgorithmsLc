class Solution {
public:
    //SORT ON BASIS OF FORMULA
    
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        int n=nums.size();
        int m=nums[0].size();
        //k closest points to the origin
        // store in form of pairs and between them calculate min 
            // distance
  priority_queue<vector<int>,vector<vector<int>>,compare> pq;
        for(auto x:nums){
            pq.push(x);//push a vector
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
           ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
    private:
    struct compare{
        bool operator()(vector<int> &p,vector<int> &q){
return p[0]*p[0]+p[1]*p[1]<q[0]*q[0]+q[1]*q[1];
        }
    };
    
};



