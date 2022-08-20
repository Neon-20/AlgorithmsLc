class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        int prsntFl=startFuel, i=0; 
        int ans=0;
        priority_queue<int> p;
        while(prsntFl < target){
            while(i<n && prsntFl >= stations[i][0]){
                p.push(stations[i][1]);
                i++;
            }
            if(p.empty()) return -1;
            prsntFl += p.top();
            p.pop();

            ans++;
        }
        return ans;
    }
};