class Solution {
public:
    int search(vector<int>& A, int target) {
        //if it is in nums or if it is not in nums
        //Use binary search
        int n=size(A);
      int lo = 0;
    int hi = n - 1;
    while (lo < hi) {
        int mid = lo + (hi-lo)/ 2;
        if (A[mid] == target) return mid;
        
        if (A[lo] <= A[mid]) {
            if (target >= A[lo] && target < A[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } else {
            if (target > A[mid] && target <= A[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    if(A[lo]==target) return lo;
        else return -1;
    }
};