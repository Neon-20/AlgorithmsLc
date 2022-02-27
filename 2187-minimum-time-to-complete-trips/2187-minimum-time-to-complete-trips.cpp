class Solution {
public:
    #define ll long long
    long long minimumTime(vector<int>& time, int totalTrips) {
      ll left=1;
      ll right=1e15;
        while(left!=right)
        {
            ll mid=(left+right)>>1;
            ll sum=0;
            for(auto x:time)
            {
                sum+=mid/x;
                if(sum>=totalTrips) break;
            }
            if(sum>=totalTrips)
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
                
        }
        return left;
    }
};