class Solution {
public:
  int getMaxGap(vector<int> bars){
      sort(bars.begin(), bars.end());
      int count = 2, res = 2;
      for(int i = 1; i < bars.size(); ++i) {
          count = (bars[i-1]+1 == bars[i])? count + 1: 2;
          res = max(res, count);
      }
      return res;
  }

  int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
      int gap = min(getMaxGap(hBars), getMaxGap(vBars));
      return gap * gap;
  }
};