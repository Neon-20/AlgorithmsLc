class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        //2 maps solution
     map<int,int> cnt;
     map<int,int> need;
     for(int x:nums){
         cnt[x]++;
        }
      for(auto x:nums){
          if(!cnt[x]) continue;
          else if(need[x]>0){
              need[x+1]++;
              need[x]--;
              cnt[x]--;
          }
          else if(cnt[x+1]>0 and cnt[x+2]>0){
              cnt[x]--;
              cnt[x+1]--;
              cnt[x+2]--;
              need[x+3]++;
          }
          else return false;
      }
        return true;
    }
};