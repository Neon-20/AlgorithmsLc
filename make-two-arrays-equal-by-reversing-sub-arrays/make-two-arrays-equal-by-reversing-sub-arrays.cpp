class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        vector<int> result=arr;
        sort(begin(result),end(result));
        sort(begin(target),end(target));
        if(result  == target) return true;
        return false;
    }
};