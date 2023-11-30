class Solution {
public:
    int maxArea(vector<int>& height) {
        //container with most water we have as 
        int n = height.size();
        //containing the most water we have as 
        //minimum width multiplied by the min height
        int i = 0;
        int j = n-1;
        int water = 0;
        while(i<j){
    water = max(water,(j-i)*min(height[i],height[j]));
    if(height[i]<height[j]) i++;
    else j--;
        }
        return water;
    }
};