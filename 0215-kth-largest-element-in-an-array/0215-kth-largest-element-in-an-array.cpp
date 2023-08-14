class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int> pq;// max heap
        for(int x:nums){
            pq.push(x);
        }
        //pq has -> 6 5 4 3 2 1 (n-k)
        while(pq.size() > n-k+1){
            pq.pop();
        }
        return pq.top();
        
    }
};