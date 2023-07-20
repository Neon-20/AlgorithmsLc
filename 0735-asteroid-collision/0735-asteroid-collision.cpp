class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        vector<int> res;
        for(int x:asteroids){
        bool destroyed = false;
            while(res.size() and res.back()>0 and x<0 and !destroyed){
                if(res.back()>=-x) destroyed=true;
                if(res.back()<=-x) res.pop_back();
            }
            if(!destroyed) res.push_back(x);
        }
        return res;
    }
};