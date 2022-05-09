class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        //We can use 2 pointers here array is sorted already
        int left=0;
        int right=n-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                return{left+1,right+1};
            }
            else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};