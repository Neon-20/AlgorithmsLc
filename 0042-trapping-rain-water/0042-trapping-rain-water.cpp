class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
        if(height.size()<3 or height.size() == 0) return 0;
      // int water = 0;
      int left = 0;
      int right = n-1;
      int leftMax = height[left];
      int rightMax = height[right];
        int water = 0;
      while(left<right){
          if(leftMax<rightMax){
              left++;
              leftMax = max(leftMax,height[left]);
              water += leftMax - height[left];
          }
          else {
              right--;
              rightMax = max(rightMax,height[right]);
              water += rightMax - height[right];
          }
      } 
        return water;    
        
    }
};

// The general thinking is that
// we want max(left,right) and then we want to take the minimum of that value and then again subtract it with - h[i]

