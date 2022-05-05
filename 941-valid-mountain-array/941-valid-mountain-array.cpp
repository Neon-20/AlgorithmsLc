class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        //valid mountain array
        // Both will rise;
        // Lets use a 2 pointer approach here
        int n=arr.size();
            int i=0;
            int j=n-1;
        while(i+1<n and arr[i+1]>arr[i]) i++;
        while(j>0 and arr[j-1]>arr[j]) j--;
        if(i>0 and j<n-1 and i == j) return true;
        else return false;
    }
};