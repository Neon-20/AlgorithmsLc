class Solution {
public:
    int minSetSize(vector<int>& nums) {
        int n=nums.size();
        map<int,int> cnt;
          priority_queue<int> pq;//Max heap
        for(auto x:nums)
        {
            ++cnt[x];
        }
        for(auto [x,y]:cnt)
        {
            pq.push(y);
        }
        // 3 3 3 3 5 5 5 2 2 7
        //     Storing it as::            3->>4, 5-->3, 2->>2, 7->1
        int answer=0;
        int sum=0;
        while(2*sum<n)
        {
            answer++;
            sum+=pq.top();
            pq.pop();
        }
        return answer;
      
    }
};