class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        //partition array into 3 parts with equal sum
        int part=0;
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0){
            return false;
        }
        int count=0;
        int average=accumulate(arr.begin(),arr.end(),0)/3;
        for(int i=0;i<arr.size();i++){
            part+=arr[i];
            if(part == average){
                part=0;
                count++;
                if(count == 3){
                    return true;
                }
            }
        }
        return false;
    }
};