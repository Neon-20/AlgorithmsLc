class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int result=0;
        for(int i=0;i<n;i++)
        {
            int pro=ceil((i+1)*(n-i)/2.0);
            result+=(pro*arr[i]);
        }
        return result;
    }
};