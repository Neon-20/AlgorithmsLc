class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
       int prev=0;
        int mx=0;
        for(auto &x:gain)
        {
            prev+=x;
            mx=max(prev,mx);
        }
        return mx;
    }
};