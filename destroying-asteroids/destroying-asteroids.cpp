class Solution {
public:
#define all(v)  (v.begin(),v.end())
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    int n=asteroids.size();
     sort(begin(asteroids),end(asteroids));
        long sum=mass;
        for(int i=0;i<n;i++)
        {
            if(asteroids[i]<=sum)
                sum+=asteroids[i];
            else 
                return false;
        }
       return true;
    }
};