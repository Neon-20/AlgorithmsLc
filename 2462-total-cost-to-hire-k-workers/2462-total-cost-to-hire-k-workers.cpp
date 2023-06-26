class Solution {
public:
#define ll long long
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();
        ll ans=0;
        int cnt=0;
        int i=0,j=n-1;
priority_queue<int,vector<int>,greater<int>> pq1,pq2;
    while(cnt<k){
    while(pq1.size()<candidates and i<=j) pq1.push(costs[i++]);
    while(pq2.size()<candidates and j>=i) pq2.push(costs[j--]);
    int cost1=pq1.size()>0 ? pq1.top():INT_MAX;
    int cost2=pq2.size()>0 ? pq2.top():INT_MAX;
    if(cost1<=cost2){
        ans+=cost1;
        pq1.pop();
    }
        else{
            ans+=cost2;pq2.pop();
        }
        cnt++;
    }
        return ans;
    }
};
// [3,2,7,7,1,2] , k=2 workers
// matlb last candidates aur first candidates
//collect them and filter out minimum in each k sessions
//where in each session we will have exactly once worker
