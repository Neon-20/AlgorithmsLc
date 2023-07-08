class Solution {
     #define ll long long
public:
   
    long long putMarbles(vector<int>& weights, int k) {
      priority_queue<int> pqmax;
      priority_queue<int,vector<int>,greater<int>> pqmin;
     ll minans=(weights[0]+weights[weights.size()-1]);
     ll maxans=minans;
     for(int i=1;i<weights.size();i++){
         pqmin.push(weights[i]+weights[i-1]);
         pqmax.push(weights[i]+weights[i-1]);
     }
    for(int i=1;i<k;i++){
        minans+=pqmin.top();
        maxans+=pqmax.top();
        pqmin.pop();
        pqmax.pop();
    }
        return maxans-minans;
    }
};
