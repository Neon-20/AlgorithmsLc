class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        //Using 2 pointer we have
        int left=0;
        int right=n-1;
        int ans=INT_MIN;
        while(left<right){
            int area=min(height[left],height[right])*(right-left);
            ans=max(ans,area);
            if(height[left]>height[right]) right--;
            else left++;
        }
        return ans;
    }
};