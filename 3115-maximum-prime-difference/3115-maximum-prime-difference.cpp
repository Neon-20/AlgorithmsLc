class Solution {
public:
    vector<int> segmentTree;
    
    void buildSegmentTree(int node, int start, int end, vector<int>& nums, vector<bool>& isPrime) {
        if (start == end) {
            segmentTree[node] = isPrime[nums[start]] ? start : -1;
            return;
        }
        
        int mid = start + (end - start) / 2;
        buildSegmentTree(2 * node, start, mid, nums, isPrime);
        buildSegmentTree(2 * node + 1, mid + 1, end, nums, isPrime);
        
        segmentTree[node] = max(segmentTree[2 * node], segmentTree[2 * node + 1]);
    }
    
    int querySegmentTree(int node, int start, int end, int left, int right) {
        if (left > end || right < start)
            return -1;
        
        if (left <= start && end <= right)
            return segmentTree[node];
        
        int mid = start + (end - start) / 2;
        int leftQuery = querySegmentTree(2 * node, start, mid, left, right);
        int rightQuery = querySegmentTree(2 * node + 1, mid + 1, end, left, right);
        
        return max(leftQuery, rightQuery);
    }
    
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        vector<bool> isPrime(101, true);
        
        // Sieve of Eratosthenes to precompute prime numbers
        isPrime[0] = isPrime[1] = false;
        for (int p = 2; p * p <= 100; ++p) {
            if (isPrime[p]) {
                for (int i = p * p; i <= 100; i += p) {
                    isPrime[i] = false;
                }
            }
        }
        
        int maxDiff = 0;
        segmentTree.resize(4 * n);
        
        // Build the segment tree
        buildSegmentTree(1, 0, n - 1, nums, isPrime);
        
        // Iterate through the array and find the maximum difference
        for (int i = 0; i < n; ++i) {
            if (isPrime[nums[i]]) {
                int maxPrimeIndex = querySegmentTree(1, 0, n - 1, i + 1, n - 1);
                if (maxPrimeIndex != -1) {
                    maxDiff = max(maxDiff, maxPrimeIndex - i);
                }
            }
        }
        
        return maxDiff;
    }
};