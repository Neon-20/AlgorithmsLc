class Solution {
public:
    int getWinner(vector<int>& nums, int k) {
      int n = nums.size();
        //find the winner of an array game
        int wins = 0;
        int winner = nums[0];
        for(int i=1;i<n;i++){
            if(winner > nums[i]){
                wins++;
            }
            else{
                wins = 1;
                winner = nums[i];
            }
            if(wins == k){
                break;
            }
        }
        return winner;
    }
};
