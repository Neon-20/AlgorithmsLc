class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        //replace the non coprime numbers in the array with their LCM
        int n=nums.size();
        vector<int> res;
        for(auto &x:nums)
        {
            res.push_back(x);// just push the elements
            while(res.size()>1)
            {
                int x=res[res.size()-1];
                int y=res[res.size()-2];
                if(__gcd(x,y) == 1) break;
                res.pop_back();
                res.pop_back();
                res.push_back(x/__gcd(x,y)*y);
            }
        }
        return res;
        
    }
};