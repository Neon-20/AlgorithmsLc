class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int largest=1;
        set<int> s(nums.begin(),nums.end());
        for(int x:nums){
            if(s.count(x-1)) continue;
                int j=1;
                while(s.count(x+j)){
                    j+=1;
                }
                largest=max(largest,j);
        }
        return largest;
    }
};