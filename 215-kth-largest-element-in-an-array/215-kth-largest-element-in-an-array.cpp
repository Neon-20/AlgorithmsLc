class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Kth largest element in the array
        priority_queue<int> pq;
        int n=size(nums);
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(pq.size()>(n-k+1)){
            pq.pop();
        }
        return pq.top();
    }
};
// 6 5 4 3 2 1 