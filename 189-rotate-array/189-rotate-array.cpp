class Solution {
public:
    void rotate(vector<int>& v, int k) {//[1,2,3,4,5,6,7]
        //we will take care of k>n
        int n=v.size();
        std::rotate(v.rbegin(),v.rbegin()+k%v.size(),v.rend());  
        
    }
};