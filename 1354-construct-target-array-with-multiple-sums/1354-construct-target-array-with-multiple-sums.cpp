class Solution {
public:
    bool isPossible(vector<int>& nums) {
       int n=nums.size();
        priority_queue<int> pq;
        long long sum=0;
        for(int x:nums){
            pq.push(x);
            sum+=x;
        }
       while(pq.top()!=1){
           auto x=pq.top();pq.pop();
           sum-=x;
           if(x<=sum or sum<1) return false;
           x%=sum;
           sum+=x;
           if(x>0) pq.push(x);
           else pq.push(sum);
       }
        return true;
    }
};
// consisting of n 1's
   // Then what we can say is
   

  