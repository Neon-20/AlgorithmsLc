class Solution {
public:
    vector<long long> getDistances(vector<int>& nums) {
     int n=nums.size();
        vector<long long> prefix(n),suffix(n);
        map<long long,vector<long long >> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto x:mp)
        {
            auto variable=x.second;
            for(int i=1;i<variable.size();i++){
            prefix[variable[i]]=prefix[variable[i-1]]+i*abs(variable[i]-variable[i-1]);
            }
        }
        for(auto x:mp)
        {
            auto variable=x.second;
            int n=variable.size();
            for(int i=variable.size()-2;i>=0;i--){
            suffix[variable[i]]=suffix[variable[i+1]]+(n-i-1)*abs(variable[i+1]-variable[i]);
            }
        }
        
        vector<long long> result;
        for(int i=0;i<n;i++)
        {
            result.push_back(prefix[i]+suffix[i]);
        }
        return result;
    
    }
};