class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        map<int,int> cnt;
        map<int,int> sub;
        //count the frequencies
        for(int x:nums) cnt[x]++;
        //Now check whether
        //If count already part of a valid subsequence
        for(auto x:nums){
            if(cnt[x] == 0) {
                continue;
            }
            if(sub[x-1]>0){//agar last element num-1 se exist                            //krega tab ki baat hai
                sub[x-1]--;
                sub[x]++;
            }
            //start a new subsequence
            else if(cnt[x+1]>0 and cnt[x+2]>0){
                sub[x+2]++;//last element added
                cnt[x+1]--;
                cnt[x+2]--;
            }
           else return false;
           cnt[x]--;
        }
        return true;
    }
};