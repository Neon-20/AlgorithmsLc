// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //search here about the bad one
        int low=1;
        int high=n;
        // int ans=-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(!isBadVersion(mid)){
                low=mid+1;
            }
            else {
                high=mid;
            }
        }
        return low;
    }
};