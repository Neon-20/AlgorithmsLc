class Solution {
public:
    int subtractProductAndSum(int num) {
        int pro=1;
        int sum=0;
        vector<int> v;
        string res=to_string(num);
        for(int i=0;i<res.length();i++)
        {
            int a=num%10;
            v.push_back(a);
            num/=10;
        }
        
        for(int i=0;i<v.size();i++)
        {
            pro=pro*v[i];
            sum+=v[i];
        }
        return pro-sum;
        
    }
};