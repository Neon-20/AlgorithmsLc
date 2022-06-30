class Solution {
public:
    int lenLongestFibSubseq(vector<int>& nums) {
        int n=nums.size();
        // longest subsequence
        // 2 ka sum a[i] hona chahiye
        unordered_set<int> s(begin(nums),end(nums));
        int cnt=0;
        int len=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=nums[i],b=nums[j];
                int c=a+b;
                cnt=2;
                while(s.count(c)){
                    cnt++;
                    a=b;
                    b=c;
                    c=a+b;
                }
                len=max(len,cnt);
            }
        }
         if(len>2) return len;
        else return 0;
    }
};